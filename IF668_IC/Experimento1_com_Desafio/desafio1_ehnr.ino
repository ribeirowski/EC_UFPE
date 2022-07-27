#define YELLOW 3
#define RED_PED 5
#define GREEN_PED 6

void pisca1(int LED_COLOR)
{
  digitalWrite(YELLOW, HIGH);
  delay(250);
  digitalWrite(YELLOW, LOW);
  delay(250);
}

void pisca2(int LED_COLOR)
{
  digitalWrite(GREEN_PED, HIGH);
  delay(250);
  digitalWrite(GREEN_PED, LOW);
  delay(250);
}

void pisca3 (int LED_COLOR)
{
	digitalWrite(LED_COLOR, HIGH);
    delay(250);
    digitalWrite(LED_COLOR, LOW);
    delay(250);
}

void semaforo(int LED_COLOR)
{
  if(LED_COLOR == 2)
  {
    digitalWrite(LED_COLOR, HIGH);
    digitalWrite(RED_PED, HIGH);
	delay(6000);
    for(int j = 0; j<8; j++)
    {
    	pisca3(LED_COLOR);
    }
    digitalWrite(YELLOW, HIGH);
    delay(1000);
    for(int j = 0; j<8; j++)
    {
    	pisca1(LED_COLOR);
    }
    digitalWrite(RED_PED, LOW);
  }
  if(LED_COLOR == 3)
  {
    digitalWrite(LED_COLOR+1, HIGH);
    digitalWrite(GREEN_PED, HIGH);
	delay(8000); 
    for(int j = 0; j<8; j++)
    {
    	pisca2(LED_COLOR);
    }
    digitalWrite(LED_COLOR+1, LOW);
    digitalWrite(GREEN_PED, LOW);
  }
}

void setup()
{
  int i;
  for(i=2; i<7; i++)
  {
  	pinMode(i, OUTPUT);
  }
}

void loop()
{
  int i;
  
  for(i=2; i<4; i++)
  {
    semaforo(i);
  }
}