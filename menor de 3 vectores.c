#include <stdio.h>

int main(void)
{
    int len;
    scanf("%d", &len);
    int a[len], b[len], c[len], d[len], *p, *pp, *ppp, *total;
    for ( p = &a[0], pp = &b[0], ppp = &d[0]; p < &a[len], pp < &b[len], ppp < &d[len]; p++, pp++, ppp++ ){
        scanf("%d", p);
        scanf("%d", pp);
        scanf("%d", ppp);
    }
    for ( p = &a[0], pp = &b[0], ppp = &d[0], total = &c[0]; p < &a[len], pp < &b[len],ppp < &d[len], total < &c[len]; p++, pp++, ppp++, total++ ){
        if (*p < *pp)
            *total = *p;
        else
            *total = *pp;
        if ( *total > *ppp )
            *total = *ppp;
    }
    for (total = &c[0]; total < &c[len]; total++ ){
        printf("%d ", *total);
    }
    p = NULL, pp = NULL, total = NULL;
    return 0;
}