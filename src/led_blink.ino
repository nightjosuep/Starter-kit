/*
  ESP32 LED Blink Test
  Hecho para probar si la carga del código funciona correctamente.
*/
#include <Arduino.h>
 
const int ledizqarriba= 18;
const int lederecarriba = 19;
const int ledizqabajo = 21;
const int lederecabajo = 22;

void setup() {
  pinMode(ledizqarriba, OUTPUT);
  pinMode(lederecarriba, OUTPUT);
  pinMode(ledizqabajo, OUTPUT);
  pinMode(lederecabajo, OUTPUT);
}

void loop() {
  //orden normal 
  digitalWrite(ledizqarriba, HIGH);
  delay(500);
  digitalWrite(ledizqarriba, LOW);
  delay(200);

  digitalWrite(lederecarriba, HIGH);
  delay(500);
  digitalWrite(lederecarriba, LOW);
  delay(200);

  digitalWrite(ledizqabajo, HIGH);
  delay(500);
  digitalWrite(ledizqabajo, LOW);
  delay(200);

  digitalWrite(lederecabajo, HIGH);
  delay(500);
  digitalWrite(lederecabajo, LOW);
  delay(200);
// orden otro 2 
  digitalWrite(ledizqarriba, HIGH);
  delay(500);
    digitalWrite(lederecarriba, HIGH);
  delay(500);
  digitalWrite(ledizqarriba, LOW);
  delay(200);
    digitalWrite(lederecarriba, LOW);
  delay(200);
  digitalWrite(ledizqabajo, HIGH);
  delay(500);
    digitalWrite(lederecabajo, HIGH);
  delay(500);
  digitalWrite(ledizqabajo, LOW);
  delay(200);
    digitalWrite(lederecabajo, LOW);
  delay(200);
//orden otro 1
  digitalWrite(ledizqarriba, HIGH);
  delay(500);
  digitalWrite(ledizqabajo, HIGH);
  delay(500);
  digitalWrite(ledizqarriba, LOW);
  delay(200);
  digitalWrite(ledizqabajo, LOW);
  delay(200);
  digitalWrite(lederecarriba, HIGH);
  delay(500);
  digitalWrite(lederecabajo, HIGH);
  delay(500);
  digitalWrite(lederecarriba, LOW);
  delay(200);
  digitalWrite(lederecabajo, LOW);
  delay(200);
//el ultimo 
  digitalWrite(ledizqarriba, HIGH);
  delay(500);
  digitalWrite(lederecarriba, HIGH);
  delay(500);
  digitalWrite(ledizqabajo, HIGH);
  delay(500);
  digitalWrite(lederecabajo, HIGH);
  delay(500);
  digitalWrite(ledizqarriba, LOW);
  delay(200);
  digitalWrite(lederecarriba, LOW);
  delay(200);
  digitalWrite(ledizqabajo, LOW);
  delay(200);
  digitalWrite(lederecabajo, LOW);
  delay(200);
}