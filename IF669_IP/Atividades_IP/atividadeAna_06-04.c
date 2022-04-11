#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int id;
    char nome[20];
    float salario;
} Funcionario;

void cadastrar_funcionarios(int x, Funcionario *y){
  for(int i=0; i<x; i++){
    printf("ID do funcionario: ");
    scanf("%d", &y[i].id);
    printf("Nome do funcionario: ");
    scanf(" %s", y[i].nome);
    printf("Salario do funcionario: ");
    scanf("%f", &y[i].salario);
    printf("\n");
  }
};

void adicionar_fucionarios(int x, Funcionario *y){
    printf("ID do funcionario: ");
    scanf("%d", &y[x].id);
    printf("Nome do funcionario: ");
    scanf(" %s", y[x].nome);
    printf("Salario do funcionario: ");
    scanf("%f", &y[x].salario);
    printf("\n");
};

void modificar_salario(int x, Funcionario *y){
    y[x].salario += ((y[x].salario)/10.0);
    printf("Salario novo: R$%.0f,00\n\n", y[x].salario);
};

int main(){

    Funcionario *dadosFunc;
    Funcionario *temporario;

    int quantidade_funcs, i, escolha, cont=0, flag=0;
    char nomeTmp[20];

    printf("Digite a quantidade de Funcionarios: ");
    scanf("%d", &quantidade_funcs);
    printf("\n\n");

    dadosFunc = (Funcionario*) calloc(quantidade_funcs, sizeof(Funcionario));
    if(dadosFunc==NULL){
      free(dadosFunc);
      exit(1);
    }

    printf("CADASTRO DE FUNCIONARIOS: \n");
    cadastrar_funcionarios(quantidade_funcs, dadosFunc);

    do{
      printf("ESCOLHA UMA OPCAO: \n");
      printf("[1] Adicionar um funcionario\n");
      printf("[2] Modificar um salario\n");
      printf("[0] Sair\n\n");
      printf("-> ");
      scanf("%d", &escolha);
      printf("\n");

      switch(escolha){
        case 1:
            temporario = (Funcionario*) realloc(dadosFunc, (quantidade_funcs + 1) * sizeof(Funcionario));
            if(temporario!=NULL){
              dadosFunc = temporario;
            } else {
              free(temporario);
              exit(1);
            }
            adicionar_fucionarios(quantidade_funcs, dadosFunc);
            quantidade_funcs++;
          break;
        case 2:
          flag = 0;
          cont = 0;
          printf("Digite o nome do funcionario: ");
          scanf(" %s", nomeTmp);
          printf("\n");
          for(i=0; i<quantidade_funcs; i++){
            if(strcmp(nomeTmp, dadosFunc[i].nome) == 0){
              printf("Funcionario selecionado: %s\n", dadosFunc[i].nome);
              printf("Salario atual: R$%.0f,00\n", dadosFunc[i].salario);
              break;
            } else flag++;
            cont++;
          }
          if(flag == quantidade_funcs){
            printf("Funcionario nao encontrado :(\n\n");
          }
          modificar_salario(cont, dadosFunc);
          break;
        default:
          break;
      }
    } while(escolha!=0);
    
    for(i=0; i<quantidade_funcs; i++){
      printf("ID do funcionario: %d\n", dadosFunc[i].id);
      printf("Nome do funcionario: %s\n", dadosFunc[i].nome);
      printf("Salario do funcionario: R$%.0f,00\n", dadosFunc[i].salario);
      printf("\n");
    }

  return 0;
}