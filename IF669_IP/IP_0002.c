#include <stdio.h>
//
#define pi 3.14159
//
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
