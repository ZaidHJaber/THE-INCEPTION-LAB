

const int analog_pin = A1; // analog pin connected to Y output

void setup() {

  Serial.begin(9600);
}

void loop() {

  Serial.print("analog value: ");
  Serial.println(analogRead(analog_pin));
  Serial.print("\n\n");
  delay(500);
}
