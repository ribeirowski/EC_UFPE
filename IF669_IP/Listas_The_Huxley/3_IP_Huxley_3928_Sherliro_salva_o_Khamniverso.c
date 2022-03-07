#include<stdio.h>
int main(){

    int i=0, tam_seq, j;

    scanf("%d", &tam_seq);

    j = tam_seq - 1;

    int vet[j], vet_fib[tam_seq];

    for(i=0; i<j; i++){
        scanf("%d", &vet[i]);
    }

    vet_fib[0] = 1;
    vet_fib[1] = 1;

    for(i=2; i<tam_seq; i++){
        vet_fib[i] = vet_fib[i-1] + vet_fib[i-2];
    }

    for(i=2; i<tam_seq; i++){
        if(vet[i]!=vet_fib[i]){
            vet[i] == vet_fib[i];
            printf("Sherliro achou o termo %d que deveria estar na posicao %d", vet_fib[i], i+1);
            return 0;
        }
    }

    return 0;
}