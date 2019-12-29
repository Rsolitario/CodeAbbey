#include <stdio.h>
#include <math.h>


int main(void){
    int len, a, cont;
    float result;
    scanf("%d", &len);
    for ( int i = 0 ; i < len; i++){
        scanf("%f", &result);
        result *= 6;
        result = floor(result);
        result = result + 1;
        printf("%.0f ", result);
    }
    return 0;
}