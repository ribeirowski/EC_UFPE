#include <stdio.h>
#include <string.h>

int main(){
    
    int tam, i=0, j=0, k=0, l=0, par=0, impar=0, soma;

    scanf("%d", &tam);
    
    int matriz[tam][tam], tam_total = tam*tam;

    char nome[tam_total][31];
    
    for(i=0;i<tam*tam;i++){
        scanf(" %s", nome[i]);
    }
    
    i=0;
    
    for(j=0;j<tam;j++){
        for(k=0;k<tam;k++){
            if((j+k)%2==0){
                soma=0;
                for(l=0;nome[i][l]!='\0';l++){
                    if(l%2==0){
                        soma+=nome[i][l];
                    }
                }
                matriz[j][k]=soma;
            }
            else{
                soma=0;
                for(l=0;nome[i][l]!='\0';l++){
                    if(l%2!=0){
                        soma+=nome[i][l];
                    }
                }
                matriz[j][k]=soma;
            }
            i++;
        }
    }
    
    for(j=0;j<tam;j++){
        for(k=0;k<tam;k++){
            if((j+k)%2==0){
                par+=matriz[j][k];
            }
            else{
                impar+=matriz[j][k];
            }
        }
    }
    
    if(par==impar){
        printf("Tivemos um empate em %d pontos!", par);
    }
    else if(par>impar){
        printf("Os pares venceram com %d pontos!", par);
    }
    else{
        printf("Os impares venceram com %d pontos!", impar);
    }
    
    
    return 0;
}