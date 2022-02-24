#include <stdio.h>

int main(){
    char let;
    int nL, cont=1, nP, v;
    scanf ("%c", &let);
    nL = (let - 64);
    while (cont <= nL){
        nP = nL - 1;
        while (nP >= cont){
            printf (".");
            nP --; 
        } 
        v = 1;
        while (v <= cont){
            printf("%c", v + 64);
            v++;
        }
        v -= 2;
        while (v > 0){
            printf("%c", v + 64);
            v --;
        }
        nP = nL - 1;
        while (nP >= cont){
            printf (".");
            nP --; 
        } 

        printf("\n");
        cont ++;
    }
    return 0;
}