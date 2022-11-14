// C++ code
//
int distancia = 0;

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
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(3, 2);
  if (distancia <= 20) {
    digitalWrite(A0, HIGH);
    if (distancia >= 10) {
      digitalWrite(A1, HIGH);
    }
  } else {
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
