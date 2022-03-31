#include<stdio.h>
#include<string.h>

typedef struct{
    char produto[20];
} listaSherliro;

typedef struct {
    char produto[20];
    float precoProduto;
} mercado2;

typedef struct{
    int id;
    int distancia;
    int numProduto;
    int iguais;
    struct mercado2; 
} mercado1;

int main(){
    int numMercados, numLista, i, j;
    scanf("%d", &numMercados);
    mercado1 Market1[numMercados];
    mercado2 Market3[13];

    for(i=0; i<numMercados; i++){
        Market1[i].id = i;
    }

    for(i=0; i<numMercados; i++){
        scanf("%d %d", &Market1[i].distancia, &Market1[i].numProduto);
        mercado2 Market2[Market1[i].numProduto];
        for(j=0; j<Market1[i].numProduto; j++){
            scanf(" %s - %f", Market2[j].produto, &Market2[j].precoProduto);
            Market3[j] = Market2[j];
        }
    }

    scanf("%d", &numLista);
    listaSherliro sherliro[numLista];

    for(i=0; i<numLista; i++){
        scanf(" %s", sherliro[i].produto);
    }

    int cont = 0, l;

    for(l=0; l<numMercados; l++){
        for(i=0; i<Market1[i].numProduto; i++){
            for(j=i+1; j<Market1[i].numProduto; j++){
                if(strcmp(sherliro[i].produto, Market3[j].produto)==0){
                    cont++;
                }
            }
        }
        Market1[l].iguais = cont;
    }

    mercado1 auxiliar;

    for(i=0; i<numMercados; i++){
        for(j=i+1; j<numMercados; j++){
            if(Market1[i].iguais < Market1[j].iguais){
                auxiliar = Market1[i];
                Market1[i] = Market1[j];
                Market1[j] = auxiliar;
            }
        }
    }

    for(i=0; i<numMercados; i++){
        for(j=i+1; j<numMercados; j++){
            if(Market1[i].iguais = Market1[j].iguais){
                if(Market1[i].distancia < Market1[j].distancia){
                    auxiliar = Market1[i];
                    Market1[i] = Market1[j];
                    Market1[j] = auxiliar;
                }
            }
        }
    }

    printf("Mercado: %d\n", Market1[0].id);

    for(i=0; i<Market1[0].numProduto; i++){
        printf("%s %2.f\n", Market3[i].produto, Market3[i].precoProduto);
    }

    return 0;
}