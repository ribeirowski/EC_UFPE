#include <stdio.h>
//1) isolando o x no sistema, obtive a seguinte formula:
#define x ((b*f)-(e*c))/((b*d)-(e*a))
//2) isolando o y no sistema, obtive a seguinte formula:
#define y ((a*f)-(d*c))/((a*e)-(d*b))
int main()
{
    float a,b,c,d,e,f;
    printf("-----------------------------------------------------\n");
    printf("Calculando o sistema: 'ax + by = c' e 'dx + ey = f': \n");
    printf("-----------------------------------------------------\n");
    printf("1) Digite o valor de a: ");
    scanf("%f", &a);
    printf("2) Digite o valor de b: ");
    scanf("%f", &b);
    printf("3) Digite o valor de c: ");
    scanf("%f", &c);
    printf("4) Digite o valor de d: ");
    scanf("%f", &d);
    printf("5) Digite o valor de e: ");
    scanf("%f", &e);
    printf("6) Digite o valor de f: ");
    scanf("%f", &f);
    printf("------------------------------\n");
    printf("O resultado do sistema e:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    return 0;
}
