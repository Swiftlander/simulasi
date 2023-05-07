#include <Fuzzy.h>

// Instantiating a Fuzzy object
Fuzzy *fuzzy = new Fuzzy();

float FuzzyResult_vent;
float FuzzyResult_fan_out;
float FuzzyResult_fan_in;

float temperature;
float humidity;
float co2;

#include "fan_control.h"
#include "servo_control.h"

void setup()
{
  // Set the Serial output
  Serial.begin(9600);

  CalculateFuzzy();
  setup_servo();
  setup_fan_dc();

}

void loop()
{
  temperature = random(0.0, 40.0);
  humidity = random(0.0, 100.0);
  co2 = random(0.0, 2000.0);

  Serial.println();
  Serial.println("==========================================");
  Serial.println("MONITORING KUALITAS UDARA DI DALAM RUANGAN");
  Serial.println("==========================================");

  Serial.println("PEMBACAAN SENSOR:");
  Serial.print("Suhu: ");
  Serial.println(temperature);
  Serial.print("Kelembaban: ");
  Serial.println(humidity);
  Serial.print("Kadar CO2: ");
  Serial.println(co2);
  Serial.println();

  // Perhitungan Fuzzy Berdasarkan Input
  // Set the random value as an input
  fuzzy->setInput(1, temperature);
  fuzzy->setInput(2, humidity);
  fuzzy->setInput(3, co2);
  // Running the Fuzzification
  fuzzy->fuzzify();
  // Running the Defuzzification
  FuzzyResult_vent = fuzzy->defuzzify(1);
  FuzzyResult_fan_out = fuzzy->defuzzify(2);
  FuzzyResult_fan_in = fuzzy->defuzzify(3);
  // Printing something

  Serial.println("HASIL FUZZY: ");
  Serial.print("Ventilasi: ");
  Serial.println(FuzzyResult_vent);
  Serial.print("Kipas Buang: ");
  Serial.println(FuzzyResult_fan_out);
  Serial.print("Kipas Masuk: ");
  Serial.println(FuzzyResult_fan_in);


  Serial.println(); Serial.println("SUDUT SERVO BESERTA KECEPATAN KIPAS: ");
  control_servo(FuzzyResult_vent);
  control_fan_speed(FuzzyResult_fan_out, FuzzyResult_fan_in);

  
  // wait 5 seconds
  delay(5000);
}
