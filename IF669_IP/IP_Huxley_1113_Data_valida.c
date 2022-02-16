#include<stdio.h>
int main(){
int dia, mes, ano;
scanf("%i %i %i", &dia, &mes, &ano);
    if ((dia<=31 && dia>=1) && (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && (ano<=2100 && ano>=1900)){
        printf("valida");
    }
    else if ((dia<=30 && dia>=1) && (mes==4 || mes==6 || mes==9 || mes==11) && (ano<=2100 && ano>=1900)){
        printf("valida");
    }
    else if ((dia<=29 && dia>=1) && (mes==2) && (ano<=2100 && ano>=1900) && (( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0)){
        printf("valida");
    }
    else if ((dia<=28 && dia>=1) && (mes==2) && (ano<=2100 && ano>=1900) && !(( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0)){
        printf("valida");
    }
    else printf("invalida");
        return 0;
    }