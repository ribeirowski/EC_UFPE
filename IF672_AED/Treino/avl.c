#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data, bf;
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
    Node *aux = (Node*)malloc(sizeof(Node));

    aux->data = NULL;
    aux->left = NULL;
    aux->right = NULL;

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
    Node *aux = (Node*)malloc(sizeof(Node));

    aux->data = NULL;
    aux->left = NULL;
    aux->right = NULL;

    if(root->left == NULL){
        return 0;
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

Node* rotateLeft(Node *root){
    Node *aux = NULL;

    aux = root->right;
    root->right = aux->left;
    aux->left = root;
    
    if(aux->bf <= 0){
        root->bf = root->bf - 1;
    } else{
        root->bf = root->bf - 1 - aux->bf;
    }
    if(root->bf > 0){
        aux->bf = aux->bf - 1;
    } else{
        aux->bf = aux->bf - 1 + root->bf;
    }
    return aux;
}

Node* rotateRight(Node *root){
    Node *aux = NULL;

    aux = root->left;
    root->left = aux->right;
    aux->right = root;

    if(aux->bf <= 0){
        root->bf = root->bf + 1 - aux->bf;
    } else{
        root->bf = root->bf + 1;
    }
    if(root->bf > 0){
        aux->bf = aux->bf + 1 + root->bf;
    } else{
        aux->bf = aux->bf + 1;
    }
    return aux;
}

int main(){
    
    return 0;
}