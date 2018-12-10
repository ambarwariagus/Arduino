/*
 * Arduino Mega 2560 <--> Kontrol LED
 * Kebutuhan: LED, potensiometer, kabel jumper
 * 1. Kaki (+) LED --> 9
 * 2. Kaki (-) LED --> GND
 * 3. Kaki 1 potensiometer --> 5V
 * 4. Kaki 2 potensiometer --> A0
 * 5. Kaki 3 potensiometer -- GND
 */

const int pinLED = 9;
const int pinPot = A0;
int sensor = 0;
int brigthness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinLED, OUTPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  sensor = analogRead(pinPot);
  Serial.println(sensor);
  brightness = map(sensor, 0, 1023, 0, 255);
  analogWrite(pinLED, brightness);
}
