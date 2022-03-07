#include<stdio.h>
#include<string.h>
int main(){

    char frase1[100], frase2[100];

    gets(frase1);

    gets(frase2);

    strcat(frase1, frase2);

    puts(frase1);

    return 0;
}