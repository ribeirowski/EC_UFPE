#include<stdio.h>
#include<string.h>

int main(){

    int n, m, n1, n2, i, j, ordem, comp=0;

    scanf("%d", &n);

    char sorteio1[n][11];

    for(i=0; i<n; i++){
        scanf(" %s", sorteio1[i]);
    }

    scanf("%d", &m);

    char sorteio2[m][11];

    for(i=0; i<m; i++){
        scanf(" %s", sorteio2[i]);
    }

    char aux[11];

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            ordem = strcmp(sorteio1[i], sorteio1[j]);
            if(ordem>0){
                strcpy(aux, sorteio1[i]);
                strcpy(sorteio1[i], sorteio1[j]);
                strcpy(sorteio1[j], aux);
            }
        }
    }

    for(i=0; i<m; i++){
        for(j=i+1; j<m; j++){
            ordem = strcmp(sorteio2[i], sorteio2[j]);
            if(ordem>0){
                strcpy(aux, sorteio2[i]);
                strcpy(sorteio2[i], sorteio2[j]);
                strcpy(sorteio2[j], aux);
            }
        }
    }

    scanf("%d %d", &n1, &n2);

    char sorteado1[11], sorteado2[11];

    strcpy(sorteado1, sorteio1[n1-1]);
    strcpy(sorteado2, sorteio2[n2-1]);

    comp = strcmp(sorteado1, sorteado2);

    if(comp == 0){
        printf("Quem ganhou tudo hoje foi %s", sorteado1);
    }

    if(comp != 0){
        printf("Quem ganhou o carro foi: %s\n", sorteado1);
        printf("Quem ganhou a moto foi: %s", sorteado2);
    }

    return 0;
}