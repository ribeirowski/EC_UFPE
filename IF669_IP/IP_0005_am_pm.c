#include <stdio.h>
int main() {
    int n1, n2, x;
    printf("Digite as horas no formato de 2 digitos (00-23): ");
    scanf("%i", &n1);
    printf("Digite os minutos no formato de 2 digitos (00-59): ");
    scanf("%i", &n2);
    x = n1%12;
    if (n1>23){
        printf("\nVoce inseriu um numero invalido (%i), tente novamente.\n", n1);
    return 0;
    }
    if (n2>59){
        printf("\nVoce inseriu um numero invalido (%i), tente novamente.\n", n2);
    return 0;
    }
    if(n1<=23 && n2<=59){
        printf("\nVoce informou a hora: %ih %imin.\n", n1, n2);
    }
    if((n1>12 && n1<13) && n2>00){
        printf("\nOu seja, sao: %ih %imin.\n", n1, n2);
    }
    if(n1>13 && n1<18){
        printf("\nOu seja, sao: %ih %imin da tarde.\n", x, n2);
    }
    if (n1==12 && n2==00){
        printf("\nOu seja, sao: %ih %imin.\n", n1, n2);
    }
    if(n1<12 && n1>=01){
        printf("\nOu seja, sao: %ih %imin da manha.\n", x, n2);
    }
    if(n1>=18 && n1<=23){
        printf("\nOu seja, sao: %ih %imin da noite.\n", x, n2);
    }
    if(n1==00){
        printf("\nOu seja, sao: %ih %imin.\n", x, n2);
    }
    return 0;
}
