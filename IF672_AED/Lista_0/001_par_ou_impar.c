#include <stdio.h>

int par_ou_impar(int x){
    if(x % 2 == 0){
        printf("Par\n");
    } else printf("Impar\n");
}

int main() {
    int num;
    scanf("%d", &num);
    
    par_ou_impar(num);

    return 0;
}