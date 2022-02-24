#include<stdio.h>
int main(){

    int i=1, n1, n2;

    while(!(i%2==0 && i>0 && i<=10000)){

    scanf("%d", &i);

    if (i==0)
    {
        return 0;
    }
    
        for (n2 = 1; ; n2++)
        {
            n1 = (n2 - 1);
            int p1 = (n1*n1), p2 = (n2*n2);
                if (n2 + n1 == i)
                {
                    printf("%d - %d\n", p2, p1);
                    break;
                }     
    }
    }
    return 0;
}
