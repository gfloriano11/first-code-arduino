void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(1500);
}
