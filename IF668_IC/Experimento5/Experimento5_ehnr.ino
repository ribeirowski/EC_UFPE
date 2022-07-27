#define BOTAO 11
int selecionados[4] = {0};
bool display[10][7] = { { 1,1,1,1,1,1,0 }, // = Digito 0
                        { 0,1,1,0,0,0,0 },  // = Digito 1
                        { 1,1,0,1,1,0,1 },  // = Digito 2
                        { 1,1,1,1,0,0,1 },  // = Digito 3
                        { 0,1,1,0,0,1,1 },  // = Digito 4
                        { 1,0,1,1,0,1,1 },  // = Digito 5
                        { 1,0,1,1,1,1,1 },  // = Digito 6
                        { 1,1,1,0,0,0,0 },  // = Digito 7
                        { 1,1,1,1,1,1,1 },  // = Digito 8
                        { 1,1,1,1,0,1,1 },};  // = Digito 9

void setup()
{
    Serial.begin(9600);
    for(int i = 2; i < 9; i++){
      	pinMode(i, OUTPUT);
    }
    pinMode(BOTAO, INPUT_PULLUP);
}

void loop()
{	
  	for(int cont = 0; cont < 4;){
      	int botao = digitalRead(BOTAO);
		int potenciometro = analogRead(A0);
        if(potenciometro <= 102){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[0][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 0;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 204){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[1][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 1;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 306){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[2][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 2;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 408){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[3][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 3;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 510){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[4][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 4;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 612){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[5][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 5;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 714){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[6][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 6;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 816){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[7][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 7;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 918){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[8][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 8;
            cont++;
            delay(500);
          }
        }
        else if(potenciometro <= 1023){
          for(int i = 2; i < 9; i++){
            digitalWrite(i, !display[9][i-2]);
          }
          if(botao == 0){
            selecionados[cont] = 9;
            cont++;
            delay(500);
          }
        }
    }
  	Serial.println("Numeros selecionados:");
  	for(int cont = 0; cont < 4; cont++){
  		Serial.println(selecionados[cont]);
  	}
	Serial.println();
}