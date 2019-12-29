#include <stdio.h>

int c;
int b;
 
int sumarDigitos (int *);

int main(void){
    int len;
    scanf("%d", &len);
    int aux, aux1, aux2, a[len-1];
    for( int i = 0 ; i < len ; i++){
        scanf("%d %d %d", &aux, &aux1, &aux2 );
        a[i] = (aux * aux1) + aux2;
    }
    printf("%d", sumarDigitos(&a[0]));
   /* for( int i = 0 ; i < len ; i++){
        b = (float) a[i];
        if (b > 10){
            do{
                b = b / 10;
            }while (b > 10);
        }
        
            printf ("%f", b);
            c = (int) b;
            b -= c;
            printf(" %d ",c);
            printf (" %f ", b);
            b *= 10;
            printf (" %f\n", b);
        
    }*/
}

int sumarDigitos(int *src){
    int d;
     b =  *src;
        if (b > 10){
            do{
                d = b;
                b = b / 10;
                d = d % 10;
                c += d;
            }while (b > 10);
        }
        printf( "%d", c);
       /* c=0;
        do{
            printf ("%f", b);
            d = 0;
            d = (int) b;
            c += (int) b;
            b -= d;
            printf(" %d ",c);
            printf (" %f ", b);
            b *= 10;
            printf (" %f\n", b);
        }while(b > 0);*/
    return 0;
}