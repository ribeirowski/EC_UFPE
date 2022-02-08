#include <stdio.h>
#include <math.h>
#define n4 sqrt(delta)
int main() {
    float n1, n2, n3;
    printf("Digite o coeficiente A da equacao: ");
    scanf("%f", &n1);
    printf("Digite o coeficiente B da equacao: ");
    scanf("%f", &n2);
    printf("Digite o coeficiente C da equacao: ");
    scanf("%f", &n3);
    int delta = pow(n2,2)-(4*(n1)*(n3));
    float equacao_x1 = (-(n2)+n4)/(2.0*n1), equacao_x2 = (-(n2)-n4)/(2.0*n1);
        if(n1==0){
        printf("\nEssa nao e uma equacao do 2 grau valida, tente novamente.\n");
        return 0;
        }
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
