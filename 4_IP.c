#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
        char str[50];
    int cont = 0, tam, l = 0, k = 0, i = 0, w = 0;

    char **aux = (char**) calloc(1, sizeof(char*));
    aux[0] = (char*) calloc(1, sizeof(char));

    if(aux[0] == NULL){
        printf("Erro\n");
        free(aux[0]);
        free(aux);
        exit(1);
    }

    for(cont = 0, l = 0; scanf(" %s", str) != EOF; cont++, l++){
        tam = strlen(str);
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
        strcpy(aux[l], str);
    }

    for(w = 0; w<cont; w++){
        printf("str[%d] = %s\n", w+1, aux[w]);
        free(aux[w]);
    }
    free(aux);

    return 0;
}
