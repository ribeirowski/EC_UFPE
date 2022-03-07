#include<stdio.h>
int main(){

    float nota1, nota2, nota3, media_A, media_P1, media_P2;

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media_A = ((nota1 + nota2 + nota3)/3);
    media_P1 = (((nota1*2) + (nota2*2) + (nota3*3))/7);
    media_P2 = (((nota1*1) + (nota2*2) + (nota3*2))/5);
    
    printf("%.2f\n%.2f\n%.2f", media_A, media_P1, media_P2);

    return 0;
}