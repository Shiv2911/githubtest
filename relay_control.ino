int rly = 9;
void setup()
{
  pinMode(rly,OUTPUT);
  digitalWrite(rly,LOW);
}
void loop()
{
  digitalWrite(rly,HIGH);
  delay(5000);
  digitalWrite(rly,LOW);
  delay(5000);

}
