#include<stdio.h>
int main(){
    int money, pg, pr, pp, py;
    int a, b, c, d;
    int vg=80, vr=100, vp=120, vy=80;
    int cont=1;
    int w, x, y, z;

    scanf("%d", &money);
    scanf("%d %d %d %d", &pg, &pr, &pp, &py);

    a = (money<pg && money<pr && money<pp && money<py);
    if (cont==1 && a==1)
    {
        printf("Acho que vou a pe :(\n");
        cont=0;
    }
    
    w=(vg/pg); 
    x=(vr/pr); 
    y=(vp/pp); 
    z=(vy/py);

    b = (w>=x && w>=y && w>=z);
    c = (x>=y && x>=z);
    d = (y>=z);

    if (cont==1 && b==1)
    {
        printf("Verde\n");
        cont=0;
    }
    if (cont==1 && c==1)
    {
        printf("Vermelho\n");
        cont=0;
    }
    if (cont==1 && d==1)
    {
        printf("Roxo\n");
        cont=0;
    }
    if (cont==1)
    {
        printf("Amarelo\n");
    }
    return 0;
}