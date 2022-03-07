#include<stdio.h>
#include<string.h>
int main(){

    int cont = 0;
    int N[1], num[20];

    scanf("%d", &N[0]);

    for(int i=0; i<20; i++){
        scanf("%d", &num[i]);
    }

    for(int i=0; i<20; i++){
        if(num[i] == N[0]){
            cont++;
        }
    }

    printf("%d aparece %d vezes", N[0], cont);

    return 0;
}