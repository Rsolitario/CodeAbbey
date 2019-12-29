#include <stdio.h>

double raiz(double, int);
int main(void){
    // Your code here!
    int len, n;
    double x;
    scanf("%d", &len);
    for(int i = 0; i  < len; i++){
        scanf("%lf %d", &x, &n );
        printf("%.7f ", raiz(x,n));
    }
}

double raiz(double x, int n){
    if(n == 0)
        return 1;
    return ( raiz(x,n-1) + ( x / raiz(x,n-1) ) ) / 2;
}