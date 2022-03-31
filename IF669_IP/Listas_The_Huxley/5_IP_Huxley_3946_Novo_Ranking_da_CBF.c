#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[15];
    float valor;
    int grandesJogadores;
    int titulos;
    char neymar[4];
    char flamengo[4];
    float pontos;
} clube;

int main(){
    int quantClubes, i;
    scanf("%d", &quantClubes);

    clube clubeBR[quantClubes];

    for(i=0; i<quantClubes; i++){
        scanf(" %15[^\n]", clubeBR[i].nome);
        scanf("%f %d %d", &clubeBR[i].valor, &clubeBR[i].grandesJogadores, &clubeBR[i].titulos);
        scanf(" %s", clubeBR[i].neymar);
        scanf(" %s", clubeBR[i].flamengo);
    }

    for(i=0; i<quantClubes; i++){
        clubeBR[i].pontos = 0;
        if(strcmp(clubeBR[i].neymar, "sim")==0){
            clubeBR[i].pontos = (clubeBR[i].valor + (clubeBR[i].grandesJogadores*100) + (clubeBR[i].titulos*2000) + 10000);
        } else clubeBR[i].pontos = (clubeBR[i].valor + (clubeBR[i].grandesJogadores*100) + (clubeBR[i].titulos*2000));
        if(strcmp(clubeBR[i].flamengo, "sim")==0){
            clubeBR[i].pontos = (clubeBR[i].pontos + 20000);
        }
    }

    int j;

    clube auxiliar;

    for(i=0; i<quantClubes; i++){
        for(j=i+1; j<quantClubes; j++){
            if(clubeBR[i].pontos<clubeBR[j].pontos){
                auxiliar = clubeBR[i];
                clubeBR[i] = clubeBR[j];
                clubeBR[j] = auxiliar;
            }
        }
    }

    for(i=0; i<quantClubes; i++){
        printf("%s %.2f\n", clubeBR[i].nome, clubeBR[i].pontos);
    }

    return 0;
}