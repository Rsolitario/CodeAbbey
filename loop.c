#include <stdio.h>

int main (void){
    int len;
    scanf("%d",&len);
    int a[len], b[len], c[len], i = 0;
    while(i < len){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        i++;
    }
    int *p, *pp, *total;
    for(p = &a[0], pp = &b[0], total = &c[0]; p < &a[len], pp < &b[len], total < &c[len]; p++, pp++, total++)
        *total = *p + (*pp);
    p = NULL, pp = NULL, total = NULL;
    i = 0;
    while(i < len){
      printf("%d ",c[i]);
      i++;
    }
    return 0;
}