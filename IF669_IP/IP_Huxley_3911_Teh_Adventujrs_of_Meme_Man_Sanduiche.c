#include<stdio.h>
int main(){
char pao1, carne, extra1, extra2, extra3, molho, pao2;
scanf("%c%c%c%c%c%c%c", &pao1, &carne, &extra1, &extra2, &extra3, &molho, &pao2);
    if(
    pao1=='.' && 
    (carne=='b' || carne=='f' || carne=='p' || carne==' ') && 
    (extra1=='A' || extra1=='T' || extra1=='C' || extra1=='R' || extra1==' ') && 
    (extra2=='A' || extra2=='T' || extra2=='C' || extra2=='R' || extra2==' ') && 
    (extra3=='A' || extra3=='T' || extra3=='C' || extra3=='R' || extra3==' ') && 
    molho=='P' && 
    pao2=='.'
    ){
        printf("Valido\n");
    }
    else if(
    pao1==':' && 
    (carne=='b' || carne=='f' || carne=='p' || carne==' ') && 
    (extra1=='A' || extra1=='T' || extra1=='C' || extra1=='R' || extra1==' ') && 
    (extra2=='A' || extra2=='T' || extra2=='C' || extra2=='R' || extra2==' ') && 
    (extra3=='A' || extra3=='T' || extra3=='C' || extra3=='R' || extra3==' ') && 
    molho=='P' && 
    pao2==':'
    ){
        printf("Valido\n");
    }
    else if(
    !(molho=='P')
    ){
        printf("Invalido\n...Mas pelo menos ganhou um chute\n");
    }
    else printf("Invalido\n");
    return 0;
}