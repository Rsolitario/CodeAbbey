#include <stdio.h>
int main(void){
    int m,n, tmp, count;
    scanf("%d %d", &m, &n);
    int cuaderno[n-1];
    count = m;
    for(int i = 0; i < n; i++)
        cuaderno[i] = 0;
    while(count--){
        scanf("%d", &tmp);
        for(int j = 1, i = 0; i < n; j++, i++) 
            if( tmp == j )
                cuaderno[i] += 1;
    }
    for(int i = 0; i < n; i++)
        printf(" %d", cuaderno[i]);
}
