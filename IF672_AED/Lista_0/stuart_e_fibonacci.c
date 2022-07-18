#include <stdio.h>

int fibonacci(int x){
    int sum, sec = 1, trd = 1;
    for(int i = 3; i<x; i++){
        sum = sec + trd;
        sec = trd;
        trd = sum;
    }
    return trd;
}

int main() {
    int n;

    scanf("%d", &n);

    if(n == 1){
        printf("%d\n", 0);
    } else printf("%d\n", fibonacci(n));

    return 0;
}