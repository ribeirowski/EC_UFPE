#include<stdio.h>
#include<stdlib.h>
int main(){

    int tam_Vet, i=0, k, n, e, f, g;

    do{
    scanf("%d %d", &tam_Vet, &k);

    if(tam_Vet!=-1 && k!=-1){
    int vet[tam_Vet], vet2[tam_Vet];

    while(i<tam_Vet) {
        scanf("%d", &vet[i]);
        i++;
    }

    for (i=0; i<tam_Vet; i++) {
        vet2[i] = vet[i];
    }

    for (int x=0; x<tam_Vet; x++) {
        for(int y=x; y<tam_Vet; y++)
            if(vet2[x] > vet2[y]){
                int j = vet2[x];
                vet2[x] = vet2[y];
                vet2[y] = j;
            }
    }

    int c=0;
    for (i=0; i<tam_Vet; i++) {
        n = (vet[i] - vet2[i]);
        if(abs(n)==k){
            c++;  
        }
    }
    printf("%d\n", c);
    for (i=0; i<tam_Vet; i++) {
        n = (vet[i] - vet2[i]);
        if(abs(n)==k){
            e = vet[i];
            f = vet2[i];
            g = i + 1; 
            printf("%d %d %d\n", e, f, g);
        }
    }
    
    i=0;
    }
    }while(tam_Vet!=-1 && k!=-1);

    return 0;
}