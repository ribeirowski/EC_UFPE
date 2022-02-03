#include <stdio.h>
//1) Definindo o valor de pi, com precisão de 5 casas decimais.
#define pi 3.14159
/*
2) Eu sei que: area total = area do retangulo (base*h) + area do circulo (pi*r**r).
3) Dados: h = altura; r = raio; prop = constante de proporcionalidade.
4) Requisitos da questao: 'h = base/prop' e 'r = h/2', ou seja, 'r = (base/prop)/2'.
5) Substituindo 'h' e 'r' na formula da area total, consegui a seguinte formula:
*/
#define area(base,prop) ((base*base)*((4*prop)+pi))/(4*(prop*prop))
int main()
{
    float b, p;
    printf("-------------------------------------------------------\n");
    printf("Calculando a area da figura (1 retangulo + 1 circulo): \n");
    printf("-------------------------------------------------------\n");
    printf("1) Digite a Base do Retangulo: ");
    scanf("%f", &b);
    printf("2) Digite a Constante de Proporcionalidade: ");
    scanf("%f", &p);
    printf("-------------------------------------------------------\n");
    printf("A area da figura e: %.2f\n", area(b,p));
    return 0;
}
