int testVar = 10;

void setup() {
  // initialize digital pin 13 as an output
  pinMode(13, OUTPUT);
  pinMode(testVar, OUTPUT);
}

void loop() {
  // blinking the LED in sequence 1, 2, 3
  // additionally, a function for dots and dashes blinks could be made

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(2000);

  digitalWrite(13, HIGH);
  digitalWrite(testVar, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(testVar, LOW);
  delay(300);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(2000);

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(300);
  digitalWrite(13, HIGH);
  digitalWrite(testVar, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(testVar, LOW);
  delay(300);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(2000);
}
