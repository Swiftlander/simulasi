//Kipas 1
int pinPWM1 = 33; //pin PWM untuk kipas 1
int pinIN11 = 16; //pin IN1 untuk kipas 1
int pinIN12 = 17; //pin IN2 untuk kipas 1

//Kipas 2
int pinPWM2 = 32; //pin PWM untuk kipas 2
int pinIN21 = 18; //pin IN1 untuk kipas 2
int pinIN22 = 19; //pin IN2 untuk kipas 2

void setup_fan_dc() {
  pinMode(pinPWM1, OUTPUT);
  pinMode(pinIN11, OUTPUT);
  pinMode(pinIN12, OUTPUT);
  pinMode(pinPWM2, OUTPUT);
  pinMode(pinIN21, OUTPUT);
  pinMode(pinIN22, OUTPUT);
}


void control_fan_speed(int rpm_buang, int rpm_masuk) {
  // =================
  // Kecepatan Kipas 1
  // =================
  int max_speed_kipas_buang = 4800; //kecepatan maksimal kipas 1 (dalam RPM)
  int target_rpm_kipas_buang = rpm_buang; //nilai variabel untuk mengatur kecepatan kipas 1

  //Bulatkan nilai variabel ke atas jika tidak bulat
  // if (target_rpm_kipas_buang % 1 != 0) {
  //   target_rpm_kipas_buang = ceil(target_rpm_kipas_buang);
  // }

  //Konversi nilai variabel menjadi nilai PWM
  int pwmValue1 = map(target_rpm_kipas_buang, 0, max_speed_kipas_buang, 0, 255);

  //Menggerakkan kipas 1
  analogWrite(pinPWM1, pwmValue1);
  digitalWrite(pinIN11, HIGH);
  digitalWrite(pinIN12, LOW);


  Serial.print("Target RPM Kipas Buang: "); Serial.print(target_rpm_kipas_buang); Serial.println(" RPM");


  // =================
  // Kecepatan Kipas 2
  // =================
  int max_speed_kipas_masuk = 4800; //kecepatan maksimal kipas 2 (dalam RPM)
  int target_rpm_kipas_masuk = rpm_masuk; //nilai variabel untuk mengatur kecepatan kipas 2

  // //Bulatkan nilai variabel ke atas jika tidak bulat
  // if (target_rpm_kipas_masuk % 1 != 0) {
  //   target_rpm_kipas_masuk = ceil(target_rpm_kipas_masuk);
  // }

  //Konversi nilai variabel menjadi nilai PWM
  int pwmValue2 = map(target_rpm_kipas_masuk, 0, max_speed_kipas_masuk, 0, 255);

  //Menggerakkan kipas 2
  analogWrite(pinPWM2, pwmValue2);
  digitalWrite(pinIN21, HIGH);
  digitalWrite(pinIN22, LOW);


  Serial.print("Target RPM Kipas Masuk: "); Serial.print(target_rpm_kipas_masuk); Serial.println(" RPM");
}