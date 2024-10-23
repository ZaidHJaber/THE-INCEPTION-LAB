

//initialise the pin used to toggle the LED
int ledPin = 5;

//initialise the pin used by the "ON" button
int buttonApin = 9;

void setup() {
  //set the ledPin as OUTPUT
  pinMode(ledPin, OUTPUT);

  //set both button pins as INPUT_PULLUP
  pinMode(buttonApin, INPUT);
}

void loop() {
  //if the "ON" button is pressed, turn ON the led
  //by setting the ledPin HIGH
  if (digitalRead(buttonApin) == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
