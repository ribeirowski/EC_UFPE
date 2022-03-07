#include<stdio.h>
int main(){

    int i, j;
    int linha, coluna;

    scanf("%d %d", &linha, &coluna);

    int vet[linha][coluna], trans[coluna][linha];

        for (i=0; i<linha; i++){
            for(j=0; j<coluna; j++){
                scanf("%d", &vet[i][j]);
            }
        }

        for (i=0; i<linha; i++){
            for(j=0; j<coluna; j++){
                trans[j][i] = vet[i][j];
            }
        }        

        for (i=0; i<coluna; i++){
            for(j=0; j<linha; j++){
                printf("%d ", trans[i][j]);
            }
            printf("\n");
        }   

    return 0;
}