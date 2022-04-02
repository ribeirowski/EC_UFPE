#include <stdio.h>
#include <stdlib.h>

struct el_lista
{
    int valor;
    struct el_lista *proximo;
};

int main(){
    struct el_lista *pointer;
    int valorAtual, i = 0;
    pointer = (struct el_lista*) malloc(sizeof(struct el_lista));

    if(pointer==NULL){
        printf("Erro!\n");
        free(pointer);
        exit(1);
    } 
    else{
        do{
            scanf(" %d", &valorAtual);
            pointer = (struct el_lista*) realloc(pointer, (i+1) * sizeof(struct el_lista));
            if(pointer==NULL){
                printf("Erro!\n");
                free(pointer);
                exit(1);
            }
            pointer[i].valor = valorAtual;
            pointer[i].proximo = NULL;
            if(i>0){
                pointer[i-1].proximo = &pointer[i];
            }
            i++;
        }while(valorAtual!=0);
    }
    while(pointer->valor != 0){
        printf("%d ", pointer->valor);
        pointer = pointer->proximo;
    }
    free(pointer);

    return 0;
}