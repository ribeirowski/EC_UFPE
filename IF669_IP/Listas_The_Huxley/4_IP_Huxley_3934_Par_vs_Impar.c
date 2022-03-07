#include<stdio.h>
#include<string.h>
int main(){

    int TAM, i;
    
    scanf("%d", &TAM);

    int TAM_matriz = (TAM*TAM);

    char matriz[TAM_matriz+1][31];

    for(i=0; i<TAM_matriz+1; i++){
        gets(matriz[i]);
    }

    for(i=0; i<TAM_matriz+1; i++){
        printf("%s", matriz[i]);
        if(i<TAM_matriz){
            printf("\n");
        }
    }

    return 0;
}