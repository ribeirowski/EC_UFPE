#include <stdio.h>
#include <math.h>
/*
1) Definindo a variavel n4, que representa a raiz quadrada de um w qualquer, utilizando a funcao sqrt da biblioteca math.h;
*/
#define n4(w) sqrt(w)
int main() {
/*
2) Lendo os valores dos 3 coeficientes da equacao;
*/
    float n1, n2, n3;
    printf("Digite o coeficiente A da equacao: ");
    scanf("%f", &n1);
    printf("Digite o coeficiente B da equacao: ");
    scanf("%f", &n2);
    printf("Digite o coeficiente C da equacao: ");
    scanf("%f", &n3);
/*
3) Definindo as variaveis delta, equacao_x1 e equacao_x2;
*/
    int delta = pow(n2,2)-(4*(n1)*(n3));
    float equacao_x1 = (-(n2)+n4(delta))/(2.0*n1), equacao_x2 = (-(n2)-n4(delta))/(2.0*n1);
/*
4) Condicao de existencia da equacao do 2 grau: o coeficiente a (n1) deve ser diferente de 0;
5) Se o valor de n1 nao atender a essa condicao o programa sera encerrado;
*/
        if(n1==0){
        printf("\nEssa nao e uma equacao do 2 grau valida, tente novamente.\n");
        return 0;
        }
/*
6) Caso a equacao tenha sua existencia comprovada, temos 3 tipos de resultados possiveis que dependem apenas do valor do delta;
7) Primeiro: se delta for maior que 0, a equacao tem 2 raizes reais;
8) Segundo: se delta for igual a 0, a equacao tem apensas 1 raize real;
9) Terceiro: se delta for menor que 0, a equacao nao tem raizes reais;
*/
        if(n1!=0 && delta>0){
        printf("\nA equacao tem duas raizes reais, que sao: %.2f e %.2f.\n", equacao_x1, equacao_x2);
        }
        if(n1!=0 && delta==0){
        printf("\nA equacao tem apenas uma raiz real: %.2f.\n", equacao_x1);
        }
        if(n1!=0 && delta<0){
        printf("\nInfelizmente a equacao nao tem nenhuma raiz real :(\n");
        }
    return 0;
}
