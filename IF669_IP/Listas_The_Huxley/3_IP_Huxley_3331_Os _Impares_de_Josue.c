#include<stdio.h>
int main() {

    int TAM=0;
    long int vet[100000];
    int i=0, j, c=0;

    for(i=0; scanf("%ld", &vet[i]) !=EOF;i++){
        TAM++;
    }
            for (int x=0; x<TAM; x++) {
                for(int y=x; y<TAM; y++){
                    if(vet[x] > vet[y]){
                        j = vet[x];
                        vet[x] = vet[y];
                        vet[y] = j;
                    }
                }
            }
            for (i=0; i<TAM; i++) {
                printf("%ld ", vet[i]);
            }
            printf("\n");
            for (i = 0; i < TAM; i+=2) {
                if (vet[i] != vet[i+1]) {
                    c++;
                }
                if(c==1){
                    printf("%d ", vet[i]);
                    break;
                }   
            }
            if(c==0){
                printf("%d", c);
            }
    return 0;
}