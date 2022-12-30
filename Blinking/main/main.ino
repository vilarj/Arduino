/*
- Project: Creating a blinking LED wave
- Alg:
  1) Turn on LED 1
  2) Wait half a second
  3) Turn off LED 1
  4) Turn on LED 2
  5) Wait half a second
  6) Turn off LED 2
  7) Continue until LED 5 is turned on, at which the process reverses from LEDs 5 to 1
  8) Repeat indefinitely
- Hardware:
  * Five LEDs
  * Five resistors
  * Various connection wires
  * One breadboard
  * Arduino and USB Cable
*/
void setup() {
  // LED control number set to output
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  /* Forward */
  // LED 1
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);

  // LED 2
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);

  // LED 3
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);

  // LED 4
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);

  // LED 5
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);

  /* Backwards */
  // LED 1
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(500);

  // LED 2
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(500);

  // LED 3
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(500);

  // LED 4
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(500);

  // LED 5
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(500);

  digitalWrite(3, LOW);
}
