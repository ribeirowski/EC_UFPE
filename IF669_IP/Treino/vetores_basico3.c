#include<stdio.h>
#define TAM 3
int main(){
    int soma=0, vet[TAM], i;
    float media;
    for (i=0;i<TAM;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
        soma+=vet[i];
    }
    media = ((float) soma)/ TAM;
    for (i=0;i<TAM;i++)
    {
        if (vet[i]>=media)
        {
            printf("vet[%d] = %d\n", i+1, vet[i]);
        }
        
    }
    return 0;
}