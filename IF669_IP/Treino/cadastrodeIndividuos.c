#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    char sexo;
} Informacoes;

typedef struct{
    int qntIndividuos;
    Informacoes *informacoes;
} Existencia;

int main(void){
    int i;
    Existencia existencia;

    printf("Quantos individuos existem? \n");
    scanf("%d", &existencia.qntIndividuos);

    existencia.informacoes = (Informacoes*) calloc(existencia.qntIndividuos, sizeof(Informacoes));
    if(existencia.informacoes == NULL){
        free(existencia.informacoes);
        exit(1);
    }

    for(i=0; i<existencia.qntIndividuos; i++){
        printf("Digite o nome: ");
        scanf(" %s", existencia.informacoes[i].nome);
        printf("Digite a idade: ");
        scanf("%d", &existencia.informacoes[i].idade);
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &existencia.informacoes[i].sexo);
    }

    printf("\n\n");

    int numFiltro, idade, j;
    char nome[50], sexo;
    do
    {
        printf("Escolha um filtro:\n");
        printf("[1] Nome\n");
        printf("[2] Idade\n");
        printf("[3] Sexo\n");
        printf("[4] Todos os Individuos\n");
        printf("[0] Cancelar\n");
        printf("\n");

        scanf("%d", &numFiltro);

        switch (numFiltro){
        case 1:
            printf("Digite o nome que voce deseja buscar: ");
            scanf(" %s", nome);
            printf("\n");
            for(j=0; j<existencia.qntIndividuos; j++){
                if(strcmp(nome, existencia.informacoes[j].nome)==0){
                    printf("Usuario [%d]:\n", j+1);
                    printf("Nome: %s\n", existencia.informacoes[j].nome);
                    printf("Idade: %d\n", existencia.informacoes[j].idade);
                    printf("Sexo: %c\n", existencia.informacoes[j].sexo);
                    printf("\n\n");
                }
            }
            if(strcmp(nome, existencia.informacoes[j].nome)!=0){
                printf("Usuario nao encontrado :/\n\n");
            }
            break;
        case 2:
            printf("Digite a idade que voce deseja buscar: ");
            scanf("%d", &idade);
            printf("\n");
            for(j=0; j<existencia.qntIndividuos; j++){
                if(idade == existencia.informacoes[j].idade){
                    printf("Usuario [%d]:\n", j+1);
                    printf("Nome: %s\n", existencia.informacoes[j].nome);
                    printf("Idade: %d\n", existencia.informacoes[j].idade);
                    printf("Sexo: %c\n", existencia.informacoes[j].sexo);
                    printf("\n\n");  
                }
            }
            if(idade != existencia.informacoes[j].idade){
                printf("Usuario nao encontrado :/\n\n");
            }
            break;
        case 3:
            printf("Digite o sexo que voce deseja buscar: ");
            scanf("%c", &sexo);
            printf("\n");
            for(j=0; j<existencia.qntIndividuos; j++){
                if(sexo == existencia.informacoes[j].sexo){
                    printf("Usuario [%d]:\n", j+1);
                    printf("Nome: %s\n", existencia.informacoes[j].nome);
                    printf("Idade: %d\n", existencia.informacoes[j].idade);
                    printf("Sexo: %c\n", existencia.informacoes[j].sexo);
                    printf("\n\n");  
                }
            }
            if(sexo != existencia.informacoes[j].sexo){
                printf("Usuario nao encontrado :/\n\n");
            }
            break;
        case 4:
            for(j=0; j<existencia.qntIndividuos; j++){
                printf("Todos os Individuos:\n\n");
                printf("Usuario [%d]:\n", j+1);
                printf("Nome: %s\n", existencia.informacoes[j].nome);
                printf("Idade: %d\n", existencia.informacoes[j].idade);
                printf("Sexo: %c\n", existencia.informacoes[j].sexo);
                printf("\n\n");
            }
            break;
        default:
            break;
        }
    } while (numFiltro!=0);

    free(existencia.informacoes);

    return 0;
}