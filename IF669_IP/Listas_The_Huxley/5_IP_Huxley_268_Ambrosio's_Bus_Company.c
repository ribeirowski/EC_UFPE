#include<stdio.h>

typedef struct{
    int numPass, idade, poltrona;
    char data[11], de[30], para[30], hora[6], nome[50];
} cliente;

int main(){

    cliente passageiro[44];

    int i=0, quantPass = 0;

    for(i=0; i<44; i++){
        scanf("%d", &passageiro[i].numPass);
            if(passageiro[i].numPass != -1){
                scanf(" %s", passageiro[i].data);
                scanf(" %30[^\n]", passageiro[i].de);
                scanf(" %30[^\n]", passageiro[i].para);
                scanf(" %s", passageiro[i].hora);
                scanf("%d", &passageiro[i].poltrona);
                scanf("%d", &passageiro[i].idade);
                scanf(" %50[^\n]", passageiro[i].nome);
                quantPass++;
            } else break;
    }
    
    int soma = 0, media = 0;

    for(i=0; i<quantPass; i++){
        soma += passageiro[i].idade;
    }

    media = soma/quantPass;

    for(i=0; i<quantPass; i++){
        if(passageiro[i].idade > media && passageiro[i].poltrona%2==0){
            printf("%s\n", passageiro[i].nome);
        }
    }

    return 0;
}