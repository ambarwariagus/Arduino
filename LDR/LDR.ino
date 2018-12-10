/*
 * Arduino Mega 2560 <--> Sensor Cahaya LDR
 * Kebutuhn: LDR, potensiometer (resistor 10K ohm), kabel jumper
 * 1. Kaki 1 LDR -> 5V
 * 2. Kaki 2 LDR -> A0 & Kaki 2 potensiometer
 * 3. Kaki 1 potensiometer --> 5V
 * 4. Kaki 3 potensiometer --> GND
 */

const int pinLDR = A0;
int dataLDR = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinLDR, INPUT);
}

void loop() {
  dataLDR = analogRead(pinLDR);
  Serial.print("dataLDR: ");
  Serial.print(dataLDR);
  
  Serial.print(" Kondisi: ");
  if (dataLDR < 150) {
    Serial.println("GELAP");
  } else if (dataLDR < 300) {
    Serial.println("REDUP");
  } else if (dataLDR < 450) {
    Serial.println("TERANG");
  } else {
    Serial.println("SILAU");
  }

  delay(1000);
}
