#include<stdio.h>
int main(){

    int a, b, c, d, e, f;
    int x=0, i, resultado1=0, resultado2=0;
    int y, z;

    scanf(" %d__%d-%d%d%d%d", &a, &b, &c, &d, &e, &f);

    for (i = 2; i <= y / 2; i++) {
            if (y % i == 0){
                resultado1++;
            }
    }
    for (i = 2; i <= z / 2; i++) {
            if (z % i == 0){
                resultado2++;
            }
        }

    for (x; x<99; x++)
    {
        y = x/a;
        z = x/b;
        
        if (resultado1 == 0 && resultado2 == 0)
        {
            printf("%d%d%d-%d%d%d%d", a, x, b, c, d, e, f);
        }
    }
    return 0;
}