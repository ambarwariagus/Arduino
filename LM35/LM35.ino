/*
 * Arduino Mega 3560 <--> Sensor Suhu LM35
 * Kebutuhan: LM35, kabel jumper
 * 1. Kaki 1 LM35 --> 5V
 * 2. Kaki 2 LM35 --> A0
 * 3. Kaki 3 LM35 --> GND
 */

const int pinSuhu = A0;
float suhu, data;

void setup() {
  Serial.begin(9600);
  pinMode(pinSuhu, INPUT);
}

void loop() {
  data = analogRead(pinSuhu);
  suhu = data * 500 / 1024;

  Serial.print("data: ");
  Serial.print(data);
  Serial.print(", suhu: ");
  Serial.print(suhu);
  Serial.println();
  delay(1000);
}
