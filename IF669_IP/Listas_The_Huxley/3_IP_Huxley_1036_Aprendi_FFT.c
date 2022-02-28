#include <stdio.h>
    
int main(){
    int i, j, n, m, k=1;
    while (scanf("%d %d", &n, &m) !=EOF){
            int p[n+1], q[m+1], pq[n+m+1];
            for (i = n; i >= 0; i = i - 1) 
                scanf("%d", &p[i]);
            for (j = m; j >= 0; j = j - 1) 
                scanf("%d", &q[j]);
            for (i = 0; i <= n + m; i = i + 1) 
                pq[i] = 0;
            //if (n >= 2  && m <= 1000){
            for (i = 0; i <= n; i = i + 1)
                for (j = 0; j <= m; j = j + 1)
                    pq[i + j] = pq[i + j] + p[i] * q[j];
                    printf("Caso #%d:", k);
            for (i = n + m; i >= 0; i = i - 1) 
                printf("% d", pq[i]);
        //}
        putchar('\n');
        k++;
    }
    return 0;
}