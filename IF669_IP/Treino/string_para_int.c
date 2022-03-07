#include<stdio.h>
int main(){
//inteiro i, numInt e um vetor de numeros inteiros e cont e um contador para definir o tamanho da string
    int i, numInt[100], cont;
    char num[100];
//printzinho pra ajudar o usuario
    printf("digite um numero: \n");
//leitura da string (numero)
    scanf(" %s", num);
//contador para saber o tamanho da string "num"
    for(i=0; (num[i]!='\0'); i++){
        cont++;
    }
/*ciclo que vai de 0 até "cont"; primeiramente, reduzimos o valor da char num[i] por 48 (char '0'),
para obermos o numero decimal (0-9) equivalente; segundamente, igualamos os valores de numInt[i] aos valores de num[i]*/
    for(i=0; i<cont; i++){
        num[i]=num[i]-48;
        numInt[i]=num[i];
    }
//printamos o valor inteiro da string num[i]!
    for(i=0; i<cont; i++){
        printf("%d", numInt[i]);
    }

    return 0;
}