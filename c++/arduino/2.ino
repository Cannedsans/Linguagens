// C++ code
//
int preto = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if (0.01723 * readUltrasonicDistance(7, 6) > 10) {
    digitalWrite(8, HIGH);
  } else {
    if (digitalRead(2) == 1) {
      digitalWrite(8, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(8, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
    }
    digitalWrite(8, LOW);
  }
}
