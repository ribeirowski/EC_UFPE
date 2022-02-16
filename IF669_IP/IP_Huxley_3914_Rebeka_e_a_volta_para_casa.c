#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int premio, soma1, p1, p2, p3, reb=3, resto;
    float x1, y1, z1;
    
    scanf("%d", &premio);
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);

    x1 = ((p1*premio)/100.0);
    y1 = ((p2*premio)/100.0);
    z1 = ((p3*premio)/100.0);

    soma1 = (x1 + y1 + z1);
    resto = premio - soma1;

    if ((x1==(int)x1 && y1==(int)y1 && z1==(int)z1))
    {
        printf("Cada homem ficou com %.f, %.f e %.f reais, respectivamente\n", x1, y1, z1);
        reb += resto;
        
        if (reb>=7)
        {
            printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
        }
        else printf("E parece que Rebeka vai ter que voltar andando...\n");
        return 0;   
    }
    
    premio++;
    x1 = ((p1*premio)/100.0);
    y1 = ((p2*premio)/100.0);
    z1 = ((p3*premio)/100.0);

        if ((x1==(int)x1 && y1==(int)y1 && z1==(int)z1))
        {
            if (resto>=2)
            {
                printf("Cada homem ficou com %.f, %.f e %.f reais, respectivamente\n", x1, y1, z1);
                reb += resto-1;
            }
            else printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            if (resto>=2 && reb>=7)
                {
                    printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
                }
                else printf("E parece que Rebeka vai ter que voltar andando...\n");
            return 0;
        }

    premio++;
    x1 = ((p1*premio)/100.0);
    y1 = ((p2*premio)/100.0);
    z1 = ((p3*premio)/100.0);

        if ((x1==(int)x1 && y1==(int)y1 && z1==(int)z1))
        {
            if (resto>=3)
            {
                printf("Cada homem ficou com %.f, %.f e %.f reais, respectivamente\n", x1, y1, z1);
                reb += resto-2;
            }
            else printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            if (resto>=3)
            {
                char letra1, letra2, letra3;
                //int  soma_das_letras;
                scanf("%s", &letra1);
                scanf("%s", &letra2);
                scanf("%s", &letra3);
                //letra1 = (letra1 - 96);
                //letra2 = (letra2 - 96);
                //letra3 = (letra3 - 96);
                //soma_das_letras = (letra1 + letra2 + letra3);
                printf("%d\n", ((letra1-96)+(letra2-96)+(letra3-96)));
            }
            if (resto>=3 && reb>=7)
                {
                    printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
                }
                else printf("E parece que Rebeka vai ter que voltar andando...\n");
            return 0;
        }
    
    premio++;
    x1 = ((p1*premio)/100.0);
    y1 = ((p2*premio)/100.0);
    z1 = ((p3*premio)/100.0);

        if ((x1==(int)x1 && y1==(int)y1 && z1==(int)z1))
        {
            if (resto>=4)
            {
                printf("Cada homem ficou com %.f, %.f e %.f reais, respectivamente\n", x1, y1, z1);
                reb += resto-3;
            }
            else printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            if (resto>=4)
            {
                int idade1, idade2, idade3, soma_da_idade1, soma_da_idade2, soma_da_idade3, soma_total;
                scanf("%d %d %d", &idade1, &idade2, &idade3);
                if (idade1%3==0)
                {
                    soma_da_idade1 = (idade1/3);
                }
                if (idade2%3==0)
                {
                    soma_da_idade2 = (idade2/3);
                }
                if (idade3%3==0)
                {
                    soma_da_idade3 = (idade3/3);
                }
                soma_total = (soma_da_idade1 + soma_da_idade2 + soma_da_idade3);
                if (soma_total!=0)
                {
                    printf("%d\n", soma_total);
                }
                else printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            }
            if (resto>=4 && reb>=7)
                {
                    printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
                }
                else printf("E parece que Rebeka vai ter que voltar andando...\n");
            return 0;
        }
    if((x1!=(int)x1 && y1!=(int)y1 && z1!=(int)z1)){
    printf("Nao foi dessa vez que Rebeka pode ajudar...\nE parece que Rebeka vai ter que voltar andando...\n");
    }
    return 0;
}