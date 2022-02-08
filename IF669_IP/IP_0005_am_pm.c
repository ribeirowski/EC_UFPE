#include <stdio.h>
int main() {
/*
1) Leitura dos valores das horas e dos minutos;
2) x e o valor da conversao de 24h para 12h;
*/    
    int n1, n2, x;
    printf("Digite as horas no formato de 2 digitos (00-23): ");
    scanf("%i", &n1);
    printf("Digite os minutos no formato de 2 digitos (00-59): ");
    scanf("%i", &n2);
    x = n1%12;
/*
3) Condicoes referentes a invalidez dos numeros lidos, se os numeros lidos forem invalidos receberao uma mensagem de aviso e o programa sera encerrado;
*/    
    if (n1>23){
        printf("\nVoce inseriu um numero invalido (%i), tente novamente.\n", n1);
    return 0;
    }
    if (n2>59){
        printf("\nVoce inseriu um numero invalido (%i), tente novamente.\n", n2);
    return 0;
    }
/*
4) Condicoes em que as regras impostas aos numeros lidos sao validas, se forem validadas, imprimira as horas e minutos informadas;
*/    
    if(n1<=23 && n2<=59){
        printf("\nVoce informou a hora: %ih %imin.\n", n1, n2);
    }
/*
5) Cada condicao abaixo corresponde a uma resposta diferente que sera dada ao usuario;
6) Primeiro, entre 00 e 11h59 = manha;
7) Segundo, entre 12 e 17h59 = tarde;
8) Terceiro, entre 18 e 23h59 = noite;
*/
    if(n1<12 && n1>=00){
        printf("\nOu seja, sao: %ih %imin da manha.\n", x, n2);
    }
    if(n1>=12 && n1<18){
        printf("\nOu seja, sao: %ih %imin da tarde.\n", x, n2);
    }
    if(n1>=18 && n1<=23){
        printf("\nOu seja, sao: %ih %imin da noite.\n", x, n2);
    }
    return 0;
}
