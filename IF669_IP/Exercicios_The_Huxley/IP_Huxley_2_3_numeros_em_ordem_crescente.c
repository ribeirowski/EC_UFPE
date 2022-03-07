#include<stdio.h>
int main(){

    int aux, i, j;
    int vet[3];

    scanf("%d", &vet[0]);
    scanf("%d", &vet[1]);
    scanf("%d", &vet[2]);

    for (i=0; i<3; i++) {
        for(j=i; j<3; j++)
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
    }
    
    for(i=0;i<3;i++){
        printf("%d", vet[i]);
        if(i<2){
            printf("\n");
        }
    }

    return 0;
}