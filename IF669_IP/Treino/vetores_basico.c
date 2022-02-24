#include<stdio.h>
int main(){
    int x[2] = {2,3};
    int i;
    for(i = 0; i<2; i++)
        printf("x[%d] = %d\n", i+1, x[i]);
    return 0;
}