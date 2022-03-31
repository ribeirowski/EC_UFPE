#include <stdio.h>
#include <string.h>

int main() {

    char word[30];
    int N, i, j, k, comp=0, cont=0;
    char aux[5][30]={0};

    scanf(" %s", word);
    scanf("%d", &N);

    char palavra[N][30];

    for (i = 0; i < N; i++)
    {
        scanf(" %s", palavra[i]);
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; palavra[i][j] != '\0'; j++)
        {
            for (k = 0; word[k] != '\0' ; k++)
            {
                if(palavra[i][j]==word[k])
                {
                aux[i][j] = palavra[i][j];
                }

            }
            
        }
        comp = strcmp(aux[i],palavra[i]);
        if (comp==0)
        {
            cont++;
        }

    }
    
    printf("E possivel formar %d palavras com esse conjunto", cont);


	return 0;
}