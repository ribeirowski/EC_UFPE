#define BUZZER 6
#define BOTAO 7

void setup()
{
  Serial.begin(9600);
    for(int i = 2; i<6; i++){
      pinMode(i, OUTPUT);
    }
	pinMode(BOTAO, INPUT_PULLUP);
  
  randomSeed(analogRead(0));
}

void apagado(){
  for(int i = 2; i<6; i++){
	digitalWrite(i, LOW);
  }
}

void aceso(){
  for(int i = 2; i<6; i++){
	digitalWrite(i, HIGH);
  }
}

void toque(int led, int toneMax){
	digitalWrite(led, HIGH);
    tone(10, toneMax);
    delay(500);
    noTone(10);
    digitalWrite(led, LOW);
    delay(500);
}

void loop()
{
  int rodada;
  int valor = 0;
  int inicio = 1;
  int *ordem = NULL;
  
  if(inicio == 1){
    
    rodada = 0;
    apagado();
      delay(200);
	aceso();
      delay(200);
	apagado();
      delay(200);
    aceso();
      delay(200);
	apagado();
      delay(200);
  }
  
  inicio = 0;
  rodada++;
  
  ordem = (int *)realloc(ordem, rodada * sizeof(int));
  ordem[rodada-1] = random(0,4);
  
  for(int i = 0; i<rodada; i++){
	if(ordem[i] == 0){
      toque(2, 30);
	}else if(ordem[i]==1){
      toque(3, 1120);
	}else if(ordem[i]==2){
      toque(4, 2700);
	}else if(ordem[i]==3){
      toque(5, 4000);
	}
  }

  for(int i = 0; i<rodada; i++){
    while(digitalRead(BOTAO) != LOW){
      apagado();
      valor = analogRead(A0);
      valor = valor/255;
      digitalWrite((valor+2), HIGH);
    }
    
    if(ordem[i] == 0){
      toque(2, 30);
	}else if(ordem[i]==1){
      toque(3, 1120);
	}else if(ordem[i]==2){
      toque(4, 2700);
	}else if(ordem[i]==3){
      toque(5, 4000);
	}
    
    if(valor != ordem[i]){
      tone(10, 100, 1000);
      aceso();
      Serial.print("Sua pontuação foi: ");
      Serial.println(rodada-1);
      inicio = 1;
      delay(3000);
    }
  }
  delay(1000);
}
  