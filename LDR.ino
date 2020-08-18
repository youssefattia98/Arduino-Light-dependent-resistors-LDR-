/*
 Author: Youssef Attia
 Description: Led control accoruding to readings from Light dependent resistors"LDR"
*/
const int ledPin = 13;
const int ldrPin = A0;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}
void loop() {
  int ldrStatus = analogRead(ldrPin);
  if (ldrStatus <= 16) {
    digitalWrite(ledPin, HIGH);
    Serial.println("DARK");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("LIGHT");
  }
}
