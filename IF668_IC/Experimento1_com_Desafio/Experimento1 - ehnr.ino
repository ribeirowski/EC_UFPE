void que_haja_luz(int LED_COLOR)
{
  digitalWrite(LED_COLOR, HIGH);
  delay(100);
  digitalWrite(LED_COLOR, LOW);
  //delay(100);
}

void setup()
{
  int i;
  for(i=2; i<8; i++)
  {
  	pinMode(i, OUTPUT);
  }
}

void loop()
{
  int i;
  //normal:
  for(i=2; i<=7; i++)
  {
  	que_haja_luz(i);
  }
  //inverso:
  for(i=7; i>=2; i--)
  {
  	que_haja_luz(i);
  }
}