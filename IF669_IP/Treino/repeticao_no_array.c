#include <stdio.h>

int main(int argc, char** argv) {
    int a, i, j, c = 0;
    scanf("%d", &a);
    int vetor[a];
    for (i = 0; i < a; i++) {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < a; i++) {
        for (j = i + 1; j < a; j++) {
            if (vetor[i] == vetor[j]) {
                c++;
            }
        }
    }
    printf("%d\n", c);
    return 0;
}