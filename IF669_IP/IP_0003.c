#include <stdio.h>
#define x ((b*f)-(e*c))/((b*d)-(e*a))
#define y ((a*f)-(d*c))/((a*e)-(d*b))
int main()
{
    float a,b,c,d,e,f;
    printf("-----------------------------\n");
    printf("1) Digite o valor de A: ");
    scanf("%f", &a);
    printf("2) Digite o valor de B: ");
    scanf("%f", &b);
    printf("3) Digite o valor de C: ");
    scanf("%f", &c);
    printf("4) Digite o valor de D: ");
    scanf("%f", &d);
    printf("5) Digite o valor de E: ");
    scanf("%f", &e);
    printf("6) Digite o valor de F: ");
    scanf("%f", &f);
    printf("------------------------------\n");
    printf("O resultado do sistema e:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    return 0;
}



