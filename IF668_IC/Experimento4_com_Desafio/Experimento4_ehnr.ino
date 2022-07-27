#define B0  31
#define C1  33
#define DB1 35
#define D1  37
#define EB1 39
#define E1  41
#define F1  44
#define GB1 46
#define G1  49
#define AB1 52
#define A1  55
#define BB1 58
#define B1  62
#define C2  65
#define DB2 69
#define D2  73
#define EB2 78
#define E2  82
#define F2  87
#define GB2 93
#define G2  98
#define AB2 104
#define A2  110
#define BB2 117
#define B2  123
#define C3  131
#define DB3 139
#define D3  147
#define EB3 156
#define E3  165
#define F3  175
#define GB3 185
#define G3  196
#define AB3 208
#define A3  220
#define BB3 233
#define B3  247
#define C4  262
#define DB4 277
#define D4  294
#define EB4 311
#define E4  330
#define F4  349
#define GB4 370
#define G4  392
#define AB4 415
#define A4  440
#define BB4 466
#define B4  494
#define C5  523
#define DB5 554
#define D5  587
#define EB5 622
#define E5  659
#define F5  698
#define GB5 740
#define G5  784
#define AB5 831
#define A5  880
#define BB5 932
#define B5  988
#define C6  1047
#define DB6 1109
#define D6  1175
#define EB6 1245
#define E6  1319
#define F6  1397
#define GB6 1480
#define G6  1568
#define AB6 1661
#define A6  1760
#define BB6 1865
#define B6  1976
#define C7  2093
#define DB7 2217
#define D7  2349
#define EB7 2489
#define E7  2637
#define F7  2794
#define GB7 2960
#define G7  3136
#define AB7 3322
#define A7  3520
#define BB7 3729
#define B7  3951
#define C8  4186
#define DB8 4435
#define D8  4699
#define EB8 4978
#define buzzer 2
#define botao 3

#define BPM                   171
#define DENOMINADOR_COMPASSO  8
#define QTD_NOTAS             332

float duracaoUnidadeTempo, cte;
int duracaoNota, i;

int notas[] ={  G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, E4, F4,        // 1
                G4, C4, E4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4,        // 2
                G4, G4, C4, C4, EB4, F4, G4, C4, EB4, F4,                                 // 3
                D4, G3, BB3, C4, D4, G3, BB3, C4, D4, G3, BB3, C4, D4, G3, BB3, C4,       // 4    
                F4, F4, BB3, BB3, EB4, D4, F4, BB3, EB4, D4,                              // 5
                C4, G3, AB3, BB3, C4, G3, AB3, BB3, C4, G3, AB3, BB3, C4, G3, AB3, BB3,   // 6  
                G4, G4, C4, C4, EB4, F4, G4, C4, EB4, F4,                                 // 3
                D4, G3, BB3, C4, D4, G3, BB3, C4, D4, G3, BB3, C4, D4, G3, BB3, C4,       // 4    
                F4, F4, BB3, BB3, EB4, D4, F4, BB3, EB4, D4,                              // 5
                C4, G3, AB3, BB3, C4, G3, AB3, BB3, C4, G4, AB4, BB4, C5, G4, AB4, BB4,   // 7
                G5, G5, C5, C5, EB5, F5, G5, C5, EB5, F5,                                  // 8  
                D5, G4, BB4, C5, D5, G4, BB4, C5, D5, G4, BB4, C5, D5, G4, BB4, C5,       // 9 
                F5, F5, BB4, BB4, D5, D5, EB5, EB5, D5, D5, BB4, BB4,                       // 10  
                C5, G4, AB4, BB4, C5, G4, AB4, BB4, C5, G4, AB4, BB4, C5, G4, AB4, BB4,   // 11
                C5, EB4, AB4, BB4, C5, EB4, BB4, AB4, BB4, EB4, G4, AB4, BB4, EB4, AB4, G4,  // 12
                C4, C4, F4, G4, AB4, C4, G4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4,           // 13 
                AB3, C4, F4, G4, AB4, C4, G4, F4, EB4, F3, AB3, C4, F4, G3, BB3, D4,         // 14
                G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4,          // 15
                C5, EB4, AB4, BB4, C5, EB4, BB4, AB4, BB4, EB4, G4, AB4, BB4, EB4, AB4, G4,  // 12
                C4, C4, F4, G4, AB4, C4, G4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4,           // 13
                AB3, C4, F4, G4, AB4, C4, G4, F4, EB4, F3, AB3, C4, D4, G3, BB3, D4,          // 16
                C4, G3, AB3, BB3, C4, G3, AB3, BB3, C4, G4, AB4, BB4, C5, G4, AB4, BB4,       // 17
                C5, G5, AB5, BB5, C6, G5, AB5, BB5, C6, G5, AB5, BB5, C6, C6                  // 18 
                      
             };

 char tempos[]={ 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 8, 16, 8, 16, 8, 16, 8, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 4, 8
              };

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  duracaoUnidadeTempo = 60/(float)BPM;
  cte = duracaoUnidadeTempo*DENOMINADOR_COMPASSO;
}

void loop()
{
  if(!digitalRead(3)){
  for (i=0; i<QTD_NOTAS; i++){
      duracaoNota =cte/tempos[i]*1000;
      tone(buzzer, notas[i], duracaoNota);
      delay(duracaoNota);  
  }
  delay(2000);
  } else{
    noTone(buzzer);
  }
}