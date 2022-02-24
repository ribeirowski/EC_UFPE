#include <stdio.h>

int main (){
    int dis, tam;
    int i = 0, cont = 0, a = 1, cont2 = 0, j = 0, xp = 0;
    int valemoedas = 0;
    int moedas = 0;
    int k = 0;

    scanf("%d %d", &dis, &tam);

    for(cont = 0; cont < dis; cont++){
        if(i == tam ){
            i = 0;
        }
        else{
            cont2 = 0;
            j = 2;
            while(j <= i/2){
            if(i%j == 0)
            { 
            cont2++;
            break;
            }
            j++;
            }
            if(cont2 == 0 && i != 1 && i != 0 )
            {
            xp += i;
            printf("%d ", i); // printar primos
            }
        } 
        if ( i == 7 ){
            valemoedas++;
        }
        i++;
    }
    if (valemoedas != 0){
        moedas = 1;
    }
    for(;valemoedas > 1; valemoedas--){
        moedas = moedas * valemoedas;
    }
    if (moedas > 0){
        printf("\nExperiencia = %d Moedas = %d", xp, moedas);
    }
    else { 
        printf("\nExperiencia = %d Moedas = 0\n", xp);
        printf("Ja que nao achei moedas, vou na Torre\n");

        for(k = 0; k <= xp; k++){
            if (k%7 == 0 && k != 0){
                printf("%d ", k);
                moedas += 30;
            }
        }
        if (moedas >= 1){
        printf("\nConsegui %d moedas na Torre", moedas);
        }
        if (moedas == 0){
            printf("Desisto.\n");
        }
    }
    return 0;
}