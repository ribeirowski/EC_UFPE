#include<stdio.h>

int main(){

    int number=0, n=0, count=0, flag=0, i=0;

    scanf("%d", &n);

    for (i=0; i<20 && flag==0; i++)
    {
        scanf("%d", &number);
        if (number==-1){
            flag=1;
        }
        else if(number==n){
            count++;
        }
    }
    
    printf("%d aparece %d vezes", n, count);

    return 0;
}