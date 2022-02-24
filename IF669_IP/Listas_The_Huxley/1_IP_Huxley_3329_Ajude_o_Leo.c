#include <stdio.h>
#include <math.h>
int main(){
    int x, y, denominador, a, b, m, n;
    scanf("(%i, %i)", &x, &y);
    scanf("%i * x ^ %i - %i * y ^ %i", &a, &n, &b, &m);
    denominador = ((a*pow(x,n))-(b*pow(y,m)));
    if(denominador==0){
        printf("a função não está definida em (%i,%i) .-.", x, y);
    }
    else if(denominador>0){
    printf("a função está definida em (%i,%i)", x, y);
    }
    return 0;
}