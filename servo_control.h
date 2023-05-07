#include <ESP32Servo.h>

Servo myServo;

int servoPin = 27;
int angle = 0; // variabel untuk menyimpan sudut putaran servo
int previousAngle = 0; // variabel untuk menyimpan sudut putaran servo sebelumnya
int increment = 1; // increment sudut per perubahan posisi servo
int delayTime = 15; // waktu jeda dalam milidetik

void setup_servo() {
  myServo.attach(servoPin); // menghubungkan servo ke pin 13
}

void control_servo(int defuzzy_vent) {
  // membaca nilai variabel angle dari sensor atau input lainnya
  // misalnya menggunakan sensor suhu DHT22
  // nilai variabel angle dapat bervariasi dari 0 hingga 180 derajat

  // mengatur sudut putaran servo berdasarkan nilai variabel angle

  angle = defuzzy_vent;


  Serial.print("Sudut Servo: "); Serial.print(defuzzy_vent); Serial.println(" derajat");

  if (angle != previousAngle) {
    if (angle > previousAngle) {
      for (int i = previousAngle; i <= angle; i += increment) {
        myServo.write(i);
        delay(delayTime);
      }
    } else {
      for (int i = previousAngle; i >= angle; i -= increment) {
        myServo.write(i);
        delay(delayTime);
      }
    }
    previousAngle = angle;
  }

}
