const int analogInPin = A3; // pin for photoresistor
const int analogOutPin = 0; // pin on programming header to copy photoresistor reading
const int digitalOutPin = 4; // pin for output signal

const int threshold = 430;

void setup() {
  pinMode(analogInPin, INPUT);
  pinMode(analogOutPin, OUTPUT);
  pinMode(digitalOutPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(analogInPin);
  analogWrite(analogOutPin, sensorValue / 4);
  digitalWrite(digitalOutPin, sensorValue > threshold);
  delay(2);
}
