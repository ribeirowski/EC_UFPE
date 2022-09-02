#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node* insert(Node *root, int data){
    Node *aux = (Node*)malloc(sizeof(Node));

    aux->data = data;
    aux->left = NULL;
    aux->right = NULL;

    if(root == NULL){
        root = aux;
    }else{
        if(data < root->data){
            root->left = insert(root->left, data);
        }else if(data > root->data){
            root->right = insert(root->right, data);
        }else return root;
    }
    return root;
}

void inOrder(struct Node* root){
    if(root == NULL){
        return 0;
    }else{
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct Node* root){
    if(root == NULL){
        return 0;
    }else{
        printf("%d ", root->data);
        inOrder(root->left);
        inOrder(root->right);
    }
}

void postOrder(struct Node* root){
    if(root == NULL){
        return 0;
    }else{
        inOrder(root->left);
        inOrder(root->right);
        printf("%d ", root->data);
    }
}

int search(Node *root, int data){
    if(root == NULL){
        return 0;
    }else{
        printf("%d ", root->data);
        if(data == root->data){
            return 1;
        } else{
            if(data > root->data){
                return search(root->right, data);
            }else{
                return search(root->left, data);
            }
        }
    }
}

int height(struct Node* root){
    int alturaD, alturaE, alturaT;
    if(root == NULL){
        return 0;
    }else{
        alturaE = height(root->left);
        alturaD = height(root->right);
        if(alturaE > alturaD){
            alturaT = 1 + alturaE;
        }else alturaT = 1 + alturaD;
    } return alturaT;
}

Node* deleteMin(Node *root){
    Node *aux = NULL;

    int valor;
    if(root->left == NULL){
        valor = root->data;
        aux = root->right;
        free(root);
        printf("\nValor deletado: %d\n\n", valor);
        return aux;
    }else{
        root->left = deleteMin(root->left);
        return root;
    }
}

Node* delete(Node *root, int data){
    Node *aux = NULL;

    if(root->left == NULL){
        return NULL;
    }else{
        if(data < root->data){
            root->left = deleteMin(root->left);
        } else if(data > root->data){
            root->right = deleteMin(root->right);
        } else{
            if(root->left == NULL){
                aux = root->right;
                free(root);
                return aux;
            } else if(root->right == NULL){
                aux = root->left;
                free(root);
                return aux;
            } else{
                root->right = deleteMin(root->right);
                return root;
            }
        }
    }
}

int main(){
    Node *root = NULL;
    int tam;

    printf("Tamanho da arvore: ");
    scanf("%d", &tam);

    int array[tam];
    int busca;

    printf("Inserir numeros: ");
    for(int i = 0; i < tam; i++){
        scanf("%d", &array[i]);
    }
    printf("\n");

    printf("Numeros Inseridos: ");
    for(int i =0; i < tam; i++){
        root = insert(root, array[i]);
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("\nVisualizacao Pre Order: ");
    preOrder(root);
    printf("\n");

    printf("\nVisualizacao In Order: ");
    inOrder(root);
    printf("\n");

    printf("\nVisualizacao Post Order: ");
    postOrder(root);
    printf("\n\n");

    int num;
    printf("Buscar Numero: ");
    scanf("%d", &num);
    printf("\n");

    printf("Elementos percorridos: ");
    busca = search(root, num);
    printf("\n");

    printf("Altura: ");
    int altura = height(root);
    printf("%d\n", altura);

    if(busca){
        printf("\n[%d] Encontrado.\n", num);
    } else{
        printf("\n[%d] Nao encontrado.\n", num);
    }

    return 0;
}