#include <stdio.h>
#include <string.h>

int main()
{

    int N;

    scanf("%d", &N);
    
    char funcao[4];
    char n1, n2;

    for (int i = 0; i < N; i++)
    {
        scanf(" %s %c, %c", funcao, &n1, &n2);

    int comp1, comp2, comp3, comp4;
    
    char string1[4] = "mov";
    char string2[4] = "add";
    char string3[4] = "sub";
    char string4[4] = "and";

        comp1 = strcmp(funcao, string1);
        comp2 = strcmp(funcao, string2);
        comp3 = strcmp(funcao, string3);
        comp4 = strcmp(funcao, string4);

        if (comp1 == 0)
        {
            printf("%c = %c\n", n1, n2);
        }
        else if (comp2 == 0)
        {
            printf("%c += %c\n", n1, n2);
        }
        else if (comp3 == 0)
        {
            printf("%c -= %c\n", n1, n2);
        }
        else if (comp4 == 0)
        {
            printf("%c = %c & %c\n", n1, n1, n2);
        }
    }

    return 0;
}