#include <stdio.h>
int main() {
    int n1, n2, w, x, y, z;
    printf("Digite o primeiro numero (10-99): ");
    scanf("%i", &n1);
    printf("Digite o segundo numero (10-99): ");
    scanf("%i", &n2);
    if(n1<10 || n1>99){
        printf("\nVoce inseriu um numero invalido (%i), tente novamente.\n", n1);
    return 0;
    }
    if(n2<10 || n2>99){
        printf("\nVoce inseriu um numero invalido (%i), tente novamente.\n", n2);
    return 0;
    }
    z = (n1+n2);
    w = (z*z);
    x = (w/100);
    y = (w%100);
    printf("\nA soma dos valores e: %i\n", z);
    printf("O quadrado de %i e: %i\n", z, w);
    if(x==n1 && y==n2){
        printf("\nParabens, a propriedade foi satisfeita com sucesso!\n");
    }
    else
        printf("\nSinto muito, a propriedade nao foi satisfeita. Tente novamente.\n");
    return 0;
}
