#define BOTAO 11

void setup()
{
  Serial.begin(9600);
  for(int i = 2; i<11; i++){
  	pinMode(i, OUTPUT);
  }
  	pinMode(BOTAO, INPUT_PULLUP);
}

void loop()
{
  int aceso[9], inicio = 1, acesoFixo = 0, potenciometro = 0;
  
  potenciometro = analogRead(A0);
  if(inicio == 1){
    for(int i = 2; i<11; i++){
    	digitalWrite(i, LOW);
    }
    
    for(int i = 0; i<10; i++){
    	aceso[i] = 0;
    }
  }
  
  for(int i = 0; i <10; i++){
      if(aceso[i] == 1){
      	digitalWrite((i+2), HIGH);
      }
  }
  
  acesoFixo = potenciometro/127;
  
  digitalWrite((acesoFixo+2), HIGH);
  delay(200);
  digitalWrite((acesoFixo+2), LOW);
  delay(200);
  
  if(digitalRead(BOTAO) == 0){
  	inicio = 0;
    aceso[acesoFixo] = 1;
  }
  
  if(aceso[0] && aceso[1] && aceso[2]){
    inicio = 1;
  }
  if(aceso[3] && aceso[4] && aceso[5]){
    inicio = 1;
  }
  if(aceso[6] && aceso[7] && aceso[8]){
    inicio = 1;
  }
  if(aceso[0] && aceso[4] && aceso[8]){
    inicio = 1;
  }
  if(aceso[2] && aceso[4] && aceso[6]){
    inicio = 1;
  }
  if(aceso[0] && aceso[3] && aceso[6]){
    inicio = 1;
  }
  if(aceso[1] && aceso[4] && aceso[7]){
    inicio = 1;
  }
  if(aceso[2] && aceso[5] && aceso[8]){
    inicio = 1;
  }
}