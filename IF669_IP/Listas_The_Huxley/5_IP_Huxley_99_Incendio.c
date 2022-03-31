#include<stdio.h>
#include<string.h>

typedef struct{
    int id;
    float temp;
    char smoke[2];
} sprinkler;

int main(){
    int numTeste, k;
    
    scanf("%d", &numTeste);

    for(k=0; k<numTeste; k++){
        int i, j, numSprink;
        float soma = 0.0, media = 0.0;
        scanf("%d", &numSprink);
        sprinkler teste[numSprink];
        for(i=0; i<numSprink; i++){
            scanf("%d %f %s", &teste[i].id, &teste[i].temp, teste[i].smoke);
            soma += teste[i].temp;
        }
        media = ((soma/numSprink));
        printf("TESTE %d\n", k+1);
        for(i=0; i<numSprink; i++){
            if((strcmp(teste[i].smoke, "S")==0) || (teste[i].temp >= 40.0) || (teste[i].temp > (media*1.15))){
                printf("%d\n", teste[i].id);
            }
        }
    }

    return 0;
}