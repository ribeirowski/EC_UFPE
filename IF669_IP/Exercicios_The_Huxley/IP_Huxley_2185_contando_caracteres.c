#include<stdio.h>
#include<string.h>
int main(){

    float num1, num2, res;
    char ope[14];
    char som[5] = "soma";
    char sub[10] = "subtracao";
    char mul[14] = "multiplicacao";
    char div[8] = "divisao";

    scanf("%f\n%f", &num1, &num2);

    scanf(" %s", ope);

    if(strcmp(ope, som) == 0){
        res = num1 + num2;
        printf("resultado = %.2f", res);
    }

    if(strcmp(ope, sub) == 0){
        res = num1 - num2;
        printf("resultado = %.2f", res);
    }

    if(strcmp(ope, mul) == 0){
        res = num1 * num2;
        printf("resultado = %.2f", res);
    }

    if(strcmp(ope, div) == 0){
        res = num1 / num2;
        printf("resultado = %.2f", res);
    }

    return 0;
}