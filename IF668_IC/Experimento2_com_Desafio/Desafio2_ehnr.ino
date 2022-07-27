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
  int inicio;
  int fim;

  if(!digitalRead(BOTAO) == 1){
    luz(RED, GREEN);
    delay(random(1000, 3001));
    inicio = millis();
    luz(GREEN, RED);
    while(digitalRead(BOTAO) == 1){
      fim = millis();
    }
    digitalWrite(GREEN, LOW);
    Serial.println(fim - inicio);
    delay(1000);
  }
}