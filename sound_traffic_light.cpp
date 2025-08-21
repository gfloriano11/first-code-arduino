#define vml 10
#define azl 9
#define vrd 8
#define bzz 2
#define vml_pessoa 13
#define azl_pessoa 12
#define vrd_pessoa 11

void setup()
{
  pinMode(vml, OUTPUT);
  pinMode(azl, OUTPUT);
  pinMode(vrd, OUTPUT);
}

void loop()
{
  analogWrite(vrd_pessoa, 255);
  analogWrite(vml, 255);
  analogWrite(azl, 0);
  analogWrite(vrd, 0);
  tone(bzz, 800, 300);
  delay(750);
  analogWrite(vrd_pessoa, 0);
  tone(bzz, 800, 300);
  delay(750);
  analogWrite(vrd_pessoa, 255);
  delay(300);
  analogWrite(vrd_pessoa, 0);
  tone(bzz, 800, 300);
  delay(750);
  analogWrite(vrd_pessoa, 255);
  delay(300);
  analogWrite(vrd_pessoa, 0);
  tone(bzz, 800, 300);
  delay(750);
  analogWrite(vrd_pessoa, 255);
  delay(300);
  analogWrite(vrd_pessoa, 0);
  delay(300);
  analogWrite(vrd_pessoa, 255);
  tone(bzz, 800, 300);
  delay(750);
  analogWrite(vml_pessoa, 255);
  analogWrite(vrd_pessoa, 0);
  analogWrite(vml, 255);
  analogWrite(azl, 0);
  analogWrite(vrd, 255);
  delay(3000);
  analogWrite(vml, 0);
  analogWrite(azl, 0);
  analogWrite(vrd, 255);
  delay(5000);
  analogWrite(vml_pessoa, 0);
}