#include<stdio.h>
int main(){
    int n, x, y, z;

    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if ((x<=1000) && (x>=1) && x>n && y>n && z>n)
    {
        printf("0\n");
        return 0;
    }

    else if ((x<=1000) && (x>=1) && (x<n) && (y<n) && (x+y<=n) && (x+y+z>n) ||
    (x<n) && (z<n) && (x+z<=n) && (x+y+z>n) ||
    (y<n) && (z<n) && (y+z<=n) && (x+y+z>n))
    {
        printf("2\n");
        return 0;
    }
    else if ((x<=1000) && (x>=1) && 
    (((x>n) || (y>n) && (z<n)) ||
    ((x>n) || (z>n) && (y<n)) ||
    ((y>n) || (z>n) && (x<n))))
    {
        printf("1\n");
        return 0;
    }
    else if ((x<=1000) && (x>=1) && (x<n) && (y<n) && (z<n) && (x+y+z<=n))
    {
        printf("3\n");
        return 0;
    }
    else if ((x=y) && (y=z) && (x=z)){
        printf("1\n");
        return 0;
    }
    else if ((n==0) && (x==0) && (y==0) && (z==0))
    {
        printf("3\n");
        return 0;
    }

    return 0;
}