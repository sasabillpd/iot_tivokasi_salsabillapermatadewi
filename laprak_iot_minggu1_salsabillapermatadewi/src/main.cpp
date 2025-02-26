#include <Arduino.h>

// Deklarasi pin lampu
int lampu = 25;  // Lampu merah
int lampu2 = 26; // Lampu kuning
int lampu3 = 27; // Lampu hijau

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  // Mengatur pin sebagai output
  pinMode(lampu, OUTPUT);
  pinMode(lampu2, OUTPUT);
  pinMode(lampu3, OUTPUT);
}

void loop() {
  // Lampu merah ON
  digitalWrite(lampu, HIGH);
  Serial.println("Lampu Merah ON");
  delay(45000);
  digitalWrite(lampu, LOW);
  Serial.println("Lampu Merah OFF");
  delay(100);

  // Lampu kuning pertama ON (sebelum hijau)
  digitalWrite(lampu2, HIGH);
  Serial.println("Lampu Kuning ON");
  delay(2000);
  digitalWrite(lampu2, LOW);
  Serial.println("Lampu Kuning OFF");
  delay(100);

  // Lampu hijau ON
  digitalWrite(lampu3, HIGH);
  Serial.println("Lampu Hijau ON");
  delay(11000);
  digitalWrite(lampu3, LOW);
  Serial.println("Lampu Hijau OFF");
  delay(100);

  // Lampu kuning kedua ON (sebelum merah)
  digitalWrite(lampu2, HIGH);
  Serial.println("Lampu Kuning ON (Sebelum Merah)");
  delay(2000);
  digitalWrite(lampu2, LOW);
  Serial.println("Lampu Kuning OFF");

  // Kembali ke awal (Merah lagi)
}
