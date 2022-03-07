#include<stdio.h>
int main(){

    float ang1, ang2, ang3;

    scanf("%f", &ang1);
    scanf("%f", &ang2);

    ang3= (180.0 - (ang1 + ang2));

    printf("3o angulo=%.6f", ang3);

    return 0;
}