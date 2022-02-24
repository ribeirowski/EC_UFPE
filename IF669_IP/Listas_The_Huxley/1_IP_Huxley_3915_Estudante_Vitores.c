#include<stdio.h>
#include<math.h>
int main(){
int a, b, c, x, quad, rest, mult, divi, soma, subt;
scanf("%i %i %i", &a, &b, &c);
quad = 0;
rest = 0;
mult = 0;
divi = 0;
soma = 0;
subt = 0;
x = 1;
    if (a*a==c)
    {
        quad=1;
    }
    if (a%b==c)
    {
        rest=1;
    }
    if (a*b==c)
    {
        mult=1;
    }
    if (a/b==c)
    {
        divi=1;
    }
    if (a+b==c)
    {
        soma=1;
    }
    if (a-b==c)
    {
        subt=1;
    }
    if (quad==1)
    {
        printf("Quadrado Vitoris\n");
        x = 0;
    }
    if (x==1 && rest==1)
    {
        printf("Resto Vitoris\n");
        x = 0;
    }
    else if (x==0 && rest==1)
    {
        printf("tambem Resto\n");
    }
    if (x==1 && mult==1)
    {
        printf("Multi Vitoris\n");
        x = 0;
    }
    else if (x==0 && mult==1)
    {
        printf("tambem Multi\n");
    }
    if (x==1 && divi==1)
    {
        printf("Div Vitoris\n");
        x = 0;
    }
    else if (x==0 && divi==1)
    {
        printf("tambem Div\n");
    }
    if (x==1 && soma==1)
    {
        printf("Soma Vitoris\n");
        x = 0;
    }
    else if (x==0 && soma==1)
    {
        printf("tambem Soma\n");
    }
    if (x==1 && subt==1)
    {
        printf("Sub Vitoris\n");
        x = 0;
    }
    else if (x==0 && subt==1)
    {
        printf("tambem Sub\n");
    }
    if (x==1)
    {
        printf("Impossivel vitores\n");
    }
    return 0;
}