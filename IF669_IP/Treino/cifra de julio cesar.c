#include <stdio.h>
int main()
{
    int chave, i=0, tamanho;

    scanf("%d", &tamanho);
    
    char palavra[tamanho], aux[tamanho];

    scanf(" %s", palavra);

    scanf("%d", &chave);

    if(chave>26){
        chave=chave%26;
    }
        while(palavra[i] != '\0')
        {
            aux[i] = palavra[i] + chave;
            if((palavra[i] + chave) > 122)
            {
                aux[i] -=26;
            }
            if((palavra[i] + chave) < 97)
            {
                aux[i] += 26;
            }
            i++;
        }
        aux[i] = '\0';
        printf("%s", aux);
    return 0;
}