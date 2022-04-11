#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
char nome[30];
int ataque;
int defesa;
} Pokemon;

typedef struct{
char nome[30];
int nPokemons;
int pontuacao;
Pokemon *pokebola;
} Treinador;

Treinador *addTreinador(Treinador *treinadores, int *qtdCompetidores){
    Treinador *temporario;
    int numComp;
    qtdCompetidores = &numComp;
    temporario = (Treinador*) realloc(treinadores, (*(qtdCompetidores)+1) * sizeof(Treinador));
    if(temporario!=NULL){
        treinadores = temporario;
        } else {
        free(temporario);
        exit(1);
        }
    printf("ADICIONAR UM TREINADOR:\n");
    printf("Nome de treinador: ");
    scanf(" %s", treinadores[*qtdCompetidores].nome);
    printf("Quantos Pokemons ele tem: ");
    scanf(" %d", &treinadores->nPokemons);
    numComp++;
}

Treinador *addPokemon(Treinador *treinadores, char *nomeTreinador, Pokemon pokemon, int qtdCompetidores){
    char nomeTmp[30];
    int flag=0;
    int cont=0;
    Pokemon *temporario;

    printf("ADICIONAR UM POKEMON:\n");
    printf("Nome do treinador: ");
    scanf(" %s", nomeTmp);
    printf("\n");
    for(int i=0; i<qtdCompetidores; i++){
        if(strcmp(nomeTmp, treinadores[i].nome) == 0){
            break;
        } else flag++;
        cont++;
    }
    if(flag == qtdCompetidores){
        printf("Treinador nao encontrado :(\n\n");
    }

    temporario = (Pokemon*) realloc(treinadores->pokebola, (treinadores[cont].nPokemons) * sizeof(Pokemon));
    if(temporario!=NULL){
        treinadores->pokebola = temporario;
    } else {
        free(temporario);
        exit(1);
    }

    for(int i=0; i<treinadores[cont].nPokemons; i++){
        printf("Nome de pokemon %d: ", i+1);
        scanf(" %s", treinadores[cont].pokebola[i].nome);
        printf("Ataque: ");
        scanf(" %d", treinadores[cont].pokebola[i].ataque);
        printf("Defesa: ");
        scanf(" %d", treinadores[cont].pokebola[i].defesa);
    }

}

char *batalha(Treinador **treinadores, char *nomeCompetidor1, char *nomecompetidor2 , int indexPokemon1 , int indexPokemon2 , int *qtdCompetidores){
    
    int j=0;

    printf("BATALHA DE POKEMONS:\n");
    printf("Treinadores:\n");
    printf("Nome do Treinador 1: ");
    scanf(" %s", nomeCompetidor1);
    for(int i=0; i<qtdCompetidores; i++){
        if(strcmp(nomeCompetidor1, treinadores[i][j].nome)==0){
            nomeCompetidor1 = treinadores[i][j].nome;
        }
        indexPokemon1++;
    }
    printf("Nome do Treinador 2: ");
    scanf(" %s", nomecompetidor2);
    for(int i=0; i<qtdCompetidores; i++){
        if(strcmp(nomecompetidor2, treinadores[i][j].nome)==0){
            nomecompetidor2 = treinadores[i][j].nome;
        }
        indexPokemon2++;
    }
    printf("\n");

    for(int i=0; i<2; i++){
        for(int k=0; k<treinadores[indexPokemon1][j].nPokemons; k++){
            int diferenca = treinadores[i]->pokebola[k].ataque - treinadores[i+1]->pokebola[k].ataque;
            if(diferenca > 0){
                (treinadores[i]->pontuacao)++;
                (treinadores[i+1]->pontuacao)--;
            }   else{
                    (treinadores[i+1]->pontuacao)++;
                    (treinadores[i]->pontuacao)--;
                }
        }
    }
}

Treinador *removeTreinador(Treinador *treinadores, int *qtdCompetidores, int indexTreinador){
    for(int i=0; i<qtdCompetidores; i++){
        if(treinadores[i].pontuacao <= -5){
            indexTreinador = i;
            free(treinadores[i].pokebola);
            qtdCompetidores--;
        }
    }
}

void menu(choice){
    printf("MENU PRINCIPAL:\n");
    printf("[1] Adicionar Treinador\n");
    printf("[2] Adicionar Pokemon\n");
    printf("[3] Batalhar\n");
    printf("[4] Sair do Programa\n\n");
    printf("->");
    scanf("%d", &choice);
    printf("\n");
}

int main(){

    Treinador *treinadores;
    Treinador **treinadores;
    Pokemon pokemon;

    int escolha, i, qtdCompetidores = 0, *qtdCompetidores = &qtdCompetidores;
    char nomeTmp[30];
    char nome1tmp[30];
    char nome2tmp[30];
    int indexComp1 = 0, indexComp2 = 0, indexCoach = 0;

    treinadores->nPokemons = 0;

    treinadores = (Treinador*) calloc(1, sizeof(Treinador));
    if(treinadores==NULL){
        free(treinadores);
        exit(1);
    }
    treinadores->pokebola = (Pokemon*) calloc(1, sizeof(Pokemon));
    if(treinadores->pokebola==NULL){
        free(treinadores->pokebola);
        exit(1);
    }

    do{
        menu(escolha);
    
        switch(escolha){
            case 1:
                *addTreinador(treinadores, qtdCompetidores);
                break;
            case 2:
                *addPokemon(treinadores, nomeTmp, pokemon, qtdCompetidores);
                break;
            case 3:
                *batalha(treinadores, nome1tmp, nome2tmp , indexComp1 , indexComp2 , qtdCompetidores);
                *removeTreinador(treinadores, qtdCompetidores, indexCoach);
                break;
            case 4:
                break;
            default:
                break;
        }
    } while(escolha!=0);

    return 0;
}