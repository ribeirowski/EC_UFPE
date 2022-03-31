#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[20];
    char tipo[3];
    int ataque;
    int defesa;
} pokemon;

int main(){

    int numPokemon, i;
    scanf("%d", &numPokemon);

    pokemon p[numPokemon]; 

    for(i=0; i<numPokemon; i++){
        scanf(" %20[^\n]", p[i].nome);
        scanf(" %s", p[i].tipo);
        scanf("%d", &p[i].ataque);
        scanf("%d", &p[i].defesa);
    }

    char comando[25];
    char tipo[4];
    int k = 1;

    do{
        scanf(" %s", comando);
        if(strcmp(comando, "0")!=0){
            if(strcmp(comando, "list")==0){
            scanf(" %s", tipo);
                for(i=0; i<numPokemon; i++){
                    if(strcmp(p[i].tipo, tipo)==0){
                        printf("Pokemon %d: %s\n Ataque: %d\n Defesa: %d\n", k, p[i].nome, p[i].ataque, p[i].defesa);
                        k++;
                    }
                }
                k=1;
            }
            else if(strcmp(comando, "luta")==0){
                    char pok1[20];
                    char pok2[20];
                    scanf(" %s vs %s", pok1, pok2);
                    for(i=0; i<numPokemon; i++){
                        if(strcmp(pok1, p[i].nome)==0){
                            for(int j=0; j<numPokemon; j++){
                                if(strcmp(pok2, p[j].nome)==0){
                                    //ataque1 - defesa2 > ataque2 - defesa1
                                    if(p[i].ataque-p[j].defesa > p[j].ataque-p[i].defesa){
                                        printf("%s deitou %s na porrada\n", pok1, pok2);
                                    } else if(p[j].ataque-p[i].defesa > p[i].ataque-p[j].defesa){
                                                printf("%s deitou %s na porrada\n", pok2, pok1);
                                    } else if(p[j].ataque-p[i].defesa == p[i].ataque-p[j].defesa){
                                                printf("parece que temos um empate\n");
                                    }
                                }
                            }
                        }
                    }
            }
        } else break;
    } while(comando!='0');

    return 0;
}