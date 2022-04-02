#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//LOGIN: ehnr

//struct da questao 5:
struct el_lista
{
    int valor;
    struct el_lista *proximo;
};

int main(){

    char c;
    char *pc;

    c = 'a';
    pc = &c;

    printf("QUESTAO 1:\n");
    printf("\n");
    printf("a)\n");
    printf("endereco de c: %p\n", &c);
    printf("valor de c: '%c'\n", c);
    printf("\n");

    printf("b)\n");
    printf("valor de pc: %p\n", pc);
    printf("valor guardado no endereco apontado por pc: '%c'\n", *pc);
    printf("\n");

    printf("c)\n");
    printf("endereco de pc: %p\n", &pc);
    printf("\n");

    printf("d)\n");
    printf("endereco do valor guardado no endereco apontado por pc: %p\n", &*pc);
    printf("valor guardado no endereco de pc: %p\n", *&pc);
    printf("\n");

    printf("e)\n");
    printf("primeiro ele pede o endereco de onde o pc aponta, ou seja, o endereco de c.\n");
    printf("segundo ele pede o valor guardado em pc, ou seja, o proprio endereco de c.\n");
    printf("\n");

    printf("QUESTAO 2:\n");
    printf("\n");

    int vet[5] = {1,2,3,4,5};
    int *p;
    p = vet;

    printf("a)\n");
    printf("endereco guardado em vet = %p\n", vet);
    printf("endereco guardado em p = %p\n", p);
    printf("\n");

    printf("b)\n");
    for(int i=0; i<5; i++){
        printf("vet[%d] = %d\n", i+1, p[i]);
    }
    printf("\n");

    printf("c)\n");
    for(int i=0; i<5; i++){
        printf("vet[%d] = %d\n", i+1, *(p+i));
    }
    printf("\n");

    printf("d)\n");
    for(int i=0; i<5; i++){
        printf("vet[%d] = %d\n", i+1, vet[i]);
    }
    printf("\n");

    printf("QUESTAO 3:\n");
    printf("\n");

    char str[50]; // String
    char str_inv[50]; // String invertida
    char *ptr_str = str;
    char *ptr_inv = str_inv;
    int i=-1;
    scanf(" %s", str);

    i+=1;
    while(*(ptr_str + i) != '\0'){
        i++;
    }

    for(; i>0; i--){
        *(ptr_inv++) = *(ptr_str + i -1);
    }

    *(ptr_inv++) = '\0';

    printf("a)\n");
    printf("O inverso da string : %s\n", str_inv);
    printf("\n");

    printf("b)\n");
    printf("pois o ponteiro ptr_inv esta apontando para o valor de str_inv, entao quando definimos o valor de prt_inv automaticamente definimos o valor de str_inv.\n");
    printf("\n");
    
    printf("QUESTAO 4:\n");
    printf("\n");

    printf("a)\n");

    printf("\n");

    char string[50];
    int cont = 0, tam, l = 0, w = 0;
    i = 0;
    char **aux = (char**) calloc(1, sizeof(char*));
    aux[0] = (char*) calloc(1, sizeof(char));

    if(aux[0] == NULL){
        printf("Erro\n");
        free(aux[0]);
        free(aux);
        exit(1);
    }

    for(cont = 0, l = 0; scanf(" %s", string) != EOF; cont++, l++){
        tam = strlen(string);
        aux = (char**) realloc (aux, (cont+1) * sizeof(char*));
        aux[l] = (char*) realloc (aux[l], tam * sizeof(char));
        if(aux[l] == NULL){
            printf("Erro\n");
            for(i=l; i<=0; i--){
                free(aux[i]);
            }
            free(aux);
            exit(1);
        }
        strcpy(aux[l], string);
    }

    for(w = 0; w<cont; w++){
        printf("str[%d] = %s\n", w+1, aux[w]);
        free(aux[w]);
    }
    free(aux);
    
    printf("QUESTAO 5:\n");
    printf("\n");

    struct el_lista *pointer;
    int valorAtual;
    i = 0;
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
    printf("\n");
    free(pointer);

    printf("QUESTAO 6:\n");
    printf("\n");

    printf("A questao 6 esta separada, no arquivo 'ilus_ehnr.png'.\n");
    
    return 0;
}