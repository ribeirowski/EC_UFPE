#include<stdio.h>
int main(){

    float vet[5];
    int negativo=0;

    for(int i=0;i<5;i++){
        scanf("%f", &vet[i]);
    }
    
    for(int i=0;i<5;i++){
        if(vet[i]<0){
            negativo++;
        }
    }

    for(int i=0;i<5;i++){
        printf("Digite um valor:\n");
    }
    
    printf("Foram digitados %d numeros negativos", negativo);

    return 0;
}