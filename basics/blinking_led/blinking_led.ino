void setup() {
  // initialize digital pin 13 as an output
  pinMode(13, OUTPUT);
}

void loop() {
  // blinking the LED in sequence 1, 2, 3
  // additionally, a function for dots and dashes blinks could be made

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(2000)

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(2000);

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(2000);
}
