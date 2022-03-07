#include<stdio.h>
int main(){

    int i, numInt[100], cont;
    char num[100];

    scanf(" %s", num);

    for(i=0; (num[i]!='\0'); i++){
        cont++;
    }

    for(i=0; i<cont; i++){
        num[i]=num[i]-48;
        numInt[i]=num[i];
    }

    for(i=0; i<cont; i++){
        printf("%d", numInt[i]);
        if(i<cont-1){
            printf(" ");
        }
    }

    return 0;
}