#define BOTAO 2
#define RED 3
#define GREEN 4

void setup()
{
  Serial.begin(9600); 
  pinMode(BOTAO, INPUT_PULLUP);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void luz(int x, int y)
{
  digitalWrite(x, HIGH);
  digitalWrite(y, LOW);
}

void loop()
{
  if(digitalRead(BOTAO) == 1){
  	luz(RED, GREEN);
  } else luz(GREEN, RED);
}