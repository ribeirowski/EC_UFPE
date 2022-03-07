#include<stdio.h>
int main(){

    float nota1, nota2, nota3, media_A;
    int quant=0;

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media_A = ((nota1 + nota2 + nota3)/3);

    if(nota1>media_A){
        quant++;
    }
    if(nota2>media_A){
        quant++;
    }
    if(nota3>media_A){
        quant++;
    }

    printf("%d", quant);

    return 0;
}