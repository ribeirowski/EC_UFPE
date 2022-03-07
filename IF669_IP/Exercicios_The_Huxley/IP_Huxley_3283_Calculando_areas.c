#include<stdio.h>
#include<string.h>
int main(){

    int x, y, z;
    float tri, cir, tra;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    tri = ((x*y)/2.0);
    cir = ((z*z)*3.14159);
    tra = (((x+y)*z)/2.0);

    printf("%.2f\n%.2f\n%.2f", tri, cir, tra);

    return 0;
}