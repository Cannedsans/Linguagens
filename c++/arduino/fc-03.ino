// C++ code
//
int preto = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == 1) { // esse if está lendo o pino 2 so sensor, que responde em 0 ou 1 ai com base nisso ele controla o led 
    digitalWrite(8, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(8, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}
