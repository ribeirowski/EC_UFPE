#include <iostream>

using namespace std;

typedef struct No{
    int valor;
    struct No *next;
} No;

typedef struct Pilha{
    No *top;
} Pilha;

void startPilha(Pilha *pilha){
    pilha->top = NULL;
}


void addPilha(int valor, Pilha *pilha){
    No *novo = (No*) malloc(sizeof(No));
    if(novo == NULL){
        cout << "Erro de alocacao" << endl;
        return;
    } else{
        novo->valor = valor;
        novo->next = pilha->top;
        pilha->top = novo;
    }
}

int removePilha(Pilha *pilha){
    No *last = pilha->top;
    int valor;
    if(pilha != NULL){
        pilha->top = last->next;
        last->next = NULL;
        valor = last->valor;
        free(last);
        return valor;
    } else{
        cout << "Pilha vazia" << endl;
        return 0;
    }
}

void printPilha(Pilha *pilha){
    No *no = pilha->top;
    if(no != NULL){
        while(no != NULL){
            cout << no->valor << " ";
            no = no->next;
        }
    } else{
        cout << "Pilha vazia" << endl;
        return;
    }
}

int main(){
    int qtd, valor;
    cout << "Digite a quantidade: ";
    cin >> qtd;
    Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
    if(pilha == NULL){
        cout << "Erro de alocacao" << endl;
        exit(-1);
    } else{
        startPilha(pilha);
        for(int i = 0; i < qtd; i++){
            printf("Valor [%d]: ", i+1);
            cin >> valor;
            addPilha(valor, pilha);
        }
    }
    printPilha(pilha);
    cout << endl;
    for(int i = 0; i < qtd; i++){
        removePilha(pilha);
        printPilha(pilha);
        cout << endl;
    }
    return 0;
}