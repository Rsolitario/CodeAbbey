#include <stdio.h>

int div (int, int);
int redondear ( float);

int main(void){
    int len, result, a, cont;
    scanf("%d", &len);
    for ( int i = 0 ; i < len; i++){
        a = -1; result = cont = 0;
        while( a != 0 ){
            scanf("%d", &a); 
            result += a;
            cont++;
        }
        printf("\n%d\t ", result);
        printf("%d\t", div(result, cont));
    }
    
}

int div (int a, int b){
    float c;
    b -= 1;
    c = (float) a / b;
    printf ("%f\t",c);
    return redondear(c);
}

int redondear(float a){
    int     pEntera;
    float   pDecimal;
    pEntera     = (int) a;
    pDecimal    = a - pEntera;
   
   if (pDecimal > 0){
         if (pDecimal > 0.5)
        pDecimal = 1;
    else
        pDecimal = 0;
    }
    else{
        if( pDecimal > -0.5 )
            pDecimal = -0;
        else
            pDecimal = -1;
    }
    
    return (int) pEntera + pDecimal;
}
