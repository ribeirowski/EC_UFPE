#include <stdio.h>
int main() {
/*
1) Leitura dos valores, onde n1 e o primeiro numero e n2 e o segundo numero;
*/
    int n1, n2, w, x, y, z;
    printf("Digite o primeiro numero (10-99): ");
    scanf("%i", &n1);
    printf("Digite o segundo numero (10-99): ");
    scanf("%i", &n2);
/*
2) Condicoes que nao satisfazem a regra dos 2 numeros n1 e n2;
*/
    if(n1<10 || n1>99){
        printf("\nVoce inseriu um numero invalido (%i), tente novamente.\n", n1);
    return 0;
    }
    if(n2<10 || n2>99){
        printf("\nVoce inseriu um numero invalido (%i), tente novamente.\n", n2);
    return 0;
    }
/*
3) Calculo do z (soma dos numeros n1 e n2); 
4) Calculo do w (z ao quadrado); 
5) Calculo do x (divisão do w por 100, o que resulta nos dois primeiros algarismos do valor de w); 
6) Calculo do y (o resto da divisão do w por 100, que sao os dois ultimos algarismos do valor de w);
7) Impressao dos valores z e w;
*/
    z = (n1+n2);
    w = (z*z);
    x = (w/100);
    y = (w%100);
    printf("\nA soma dos valores e: %i\n", z);
    printf("O quadrado de %i e: %i\n", z, w);
/*
8) Imprimindo mensagem caso a condicao seja favoravel (quando x=n1 e y=n2);
9) Imprimindo mensagem caso a condicao seja desfavoravel (quando x!=n1 ou y!=n2);
*/
    if(x==n1 && y==n2){
        printf("\nParabens, a propriedade foi satisfeita com sucesso!\n");
    }
    else
        printf("\nSinto muito, a propriedade nao foi satisfeita. Tente novamente.\n");
    return 0;
}