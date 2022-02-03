#include <stdio.h>
//1) Conversão de minutos para horas, apenas a parte inteira.
#define mm_hh (tMin/60)
/*
2) Soma da hora original com a hora convertida anteriormente.
3) Utilizando o operador % para pegar o resto da divisão da soma por 24.
*/
#define novo_hh ((hh+mm_hh)%24)
//4) Subtracao dos minutos adicionados pelo usuario menos a quantidade de horas adicionadas convertidas para minutos.
#define mm_mm (tMin-(60*mm_hh))
//5) Definicao dos novos minutos, sendo minutos originais + os minutos adicionados e ajustados.
#define novo_mm (mm+mm_mm)
int main()
{
    int hh, mm, tMin;
    printf("------------------------------------------\n");
    printf("Calculando uma nova hora: \n");
    printf("------------------------------------------\n");
    printf("- Insira a hora (Formato 24h): ");
    scanf("%i", &hh);
    printf("- Insira os minutos (de 0 a 59 min): ");
    scanf("%i", &mm);
    //printf("--------------------------------------\n");
    printf("No momento sao: %i h %i min.\n", hh, mm);
    printf("--------------------------------------\n");
    printf("- Insira alguns minutos a mais: ");
    scanf("%i", &tMin);
    //printf("--------------------------------------\n");
    printf("Agora sao: %i h %i min.\n", novo_hh, novo_mm);
    return 0;
}
