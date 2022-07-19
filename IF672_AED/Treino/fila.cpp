#include <iostream>

using namespace std;

typedef struct No{
    int valor;
    struct No *next;
} No;

typedef struct Fila{
    int tam;
    No *head, *tail;
} Fila;

void startFila(Fila *fila){
    fila->head = NULL;
    fila->tail = NULL;
}

void addFila(int valor, Fila *fila){
    No *novo = (No*)malloc(sizeof(No));
    if(novo == NULL){
        cout << "Erro de alocacao\n";
        return;
    }else{
        novo->valor = valor;
        novo->next = NULL;
        if(fila->head == NULL){
            fila->head = novo;
        } else{
            fila->tail->next = novo;
        }
        fila->tail = novo;
    }
    fila->tam++;
}

int removeFila(Fila *fila){
    No *first = fila->head;
    int valor;
    if(first != NULL){
        fila->head = first->next;
        first->next = NULL;
        valor = first->valor;
        free(first);
        if(fila->head == NULL){
            fila->tail = NULL;
        }
        return valor;
    } else{
        cout << "Fila vazia" << endl;
        return 0;
    }
    fila->tam--;
}

void printFila(Fila *fila){
    No *no = fila->head;
    if(no != NULL){
        while(no != NULL){
            cout << no->valor << " ";
            no = no->next;
        }
    } else{
        cout << endl << "Fila vazia" << endl;
        return;
    }
}

int main(){
    int qtd, valor;
    cout << "Digite a quantidade: ";
    cin >> qtd;
    Fila *fila = (Fila*) malloc(sizeof(Fila));
    if(fila == NULL){
        cout << "Erro de alocacao" << endl;
        exit(-1);
    } else{
        startFila(fila);
        for(int i = 0; i < qtd; i++){
            printf("Valor [%d]: ", i+1);
            cin >> valor;
            addFila(valor, fila);
        }
    }
    printFila(fila);
    cout << endl;
    for(int i = 0; i < qtd; i++){
        removeFila(fila);
        printFila(fila);
        cout << endl;
    }
    return 0;
}