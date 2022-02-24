#include<stdio.h>
int main(){
    int ope=0; 
    float numAtual, num2;

    printf("- Numero atual: ");
    scanf("%f", &numAtual);
    printf("- Segundo numero: ");
    scanf("%f", &num2);

    while(ope != -1){
        printf("---------------------\n");
        printf("CALCULADORA\n\n1. Soma\n2. Sutracao\n3. Multiplicacao\n4. Divisao\n-1. Sair\n");
        printf("---------------------\n\n");

        scanf("%d", &ope);

        if(ope == 1){
            numAtual += num2;
            printf("\nA soma e: %.2f\n", numAtual);
            numAtual -= num2;
        }
        if(ope == 2){
            numAtual -= num2;
            printf("\nA subtracao e: %.2f\n", numAtual);
            numAtual += num2;
        }
        if(ope == 3){
            numAtual *= num2;
            printf("\nA multiplicacao e: %.2f\n", numAtual);
            numAtual /= num2;
        }
        if(ope == 4){
            numAtual /= num2;
            printf("\nA divisao e: %.2f\n", numAtual);
            numAtual *= num2;
        }
        if(ope == -1){
        printf("\nAdeus!\n");
        }
    }

    return 0;
}