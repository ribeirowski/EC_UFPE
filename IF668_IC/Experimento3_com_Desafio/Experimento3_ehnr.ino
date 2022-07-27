int valor_pot = 0;
int brilho =0;

void setup()
{
  for(int i = 2; i<11; i++){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  valor_pot = analogRead(A0);
 
  if(valor_pot >= 0 && valor_pot < 114){
   	digitalWrite(2, HIGH);
  } else digitalWrite(2, LOW);
  if(valor_pot > 114 && valor_pot < 228){
   	digitalWrite(3, HIGH);
  } else digitalWrite(3, LOW);
  if(valor_pot > 228 && valor_pot < 342){
   	digitalWrite(4, HIGH);
  } else digitalWrite(4, LOW);
  if(valor_pot > 342 && valor_pot < 456){
   	digitalWrite(5, HIGH);
  } else digitalWrite(5, LOW);
  if(valor_pot > 456 && valor_pot < 570){
   	digitalWrite(6, HIGH);
  } else digitalWrite(6, LOW);
  if(valor_pot > 570 && valor_pot < 684){
   	digitalWrite(7, HIGH);
  } else digitalWrite(7, LOW);
  if(valor_pot > 684 && valor_pot < 798){
   	digitalWrite(8, HIGH);
  } else digitalWrite(8, LOW);
  if(valor_pot > 798 && valor_pot < 912){
   	digitalWrite(9, HIGH);
  } else digitalWrite(9, LOW);
  if(valor_pot > 912 && valor_pot < 1024){
   	digitalWrite(10, HIGH);
  } else digitalWrite(10, LOW);
}