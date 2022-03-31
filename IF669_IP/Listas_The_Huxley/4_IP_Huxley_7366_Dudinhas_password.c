#include<stdio.h>
#include<string.h>

int main(){

    int n, i, j, comp = 0;

    scanf("%d", &n);

    char string[n][13];
    char lado[n][1];
    char aux[n][7];

    for(i=0; i<n; i++){
        scanf(" %s", lado[i]);
        scanf(" %s", string[i]);                           
    }

    comp = strcmp(lado[i], "d");

    if(comp == 0){
        strncpy(aux[i], string[i], (strlen(string)/2));      
    }

    int fim = n - 1;
    char aux2[n][13];

    for(i = 0; i < n; i++){
        aux2[i] = string[i];
        string[i] = string[fim];
        string[fim] = aux2[i];
        fim--;
    }

    if(comp != 0){
        strncpy(aux[i], string[i], (strlen(string)/2));
    }  
    
    printf("%s\n", aux);

    /* char palavra[13];

    scanf(" %s", palavra); */

    return 0;
}