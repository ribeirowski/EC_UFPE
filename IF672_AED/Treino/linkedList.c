#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int value;
    struct Node* next;
} Node;

Node* listInsert(Node* node, int val){
    Node* new = (Node*)malloc(sizeof(Node));
    new->value = val;
    new->next = node->next;
    node->next = new;
    return node;
}

Node* listPosition(Node* node, int position){
    Node* aux = NULL;
    aux = node;
    int i = 0;
    while(i < position && aux->next != NULL){
        aux = aux->next;
        i++;
    }
    return aux;
}

Node* listFind(Node* node, int val){
    Node* aux = NULL;
    aux = node;
    while(aux->next != NULL && aux->next->value != val){
        aux = aux->next;
    }
    return aux;
}

Node* listDelete(Node* node, int* val){
    Node* aux = NULL;
    aux = node->next;
    node->next = aux->next;
    (*val) = aux->value;
    free(aux);
    return node;
}

void listPrint(Node** node){
    Node* aux = NULL;
    aux = node;
    while(aux->next != NULL){
        printf("%d ", aux->next->value);
        aux = aux->next;
    }
    printf("\n");
}

int main(){
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    
    int valor, value;

    char evento[4];

    do
    {
        scanf(" %3[^ ]", evento);
        if (strcmp(evento, "INS") == 0)
        {
            printf("Valor a inserir: ");
            scanf("%d", &valor);
            head = listInsert(head, valor);
        }
        else if (strcmp(evento, "DPO") == 0)
        {
            Node* aux = NULL;
            printf("Posicao a deletar: ");
            scanf("%d", &valor);
            aux = listPosition(head, valor);
            listDelete(aux, &value);
            printf("%d\n", value);
        }
        else if (strcmp(evento, "DVA") == 0)
        {
            Node* aux = NULL;
            printf("Valor a deletar: ");
            scanf("%d", &valor);
            aux = listFind(head, valor);
            listDelete(aux, &value);
            printf("%d\n", value);
        }
        else if (strcmp(evento, "PRI") == 0)
        {
            listPrint(head);
        }
    } while (strcmp(evento, "END") != 0);

    return 0;
}