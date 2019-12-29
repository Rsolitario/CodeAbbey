#include <stdio.h>

void is_digit(int);

int main (void)
{
    int len;
    scanf("%d", &len);
    int a;
    for (int i = 0; i < len; i++){
        scanf("%d", &a);
        is_digit(a);
        
    }
}

void is_digit(int a){
    int tmp, res, total[100], resultado = 0 , i = 0;
   tmp = a;
    if ( tmp > 10){
            do{
                res = tmp;
                tmp = tmp / 10; 
                res = res % 10; 
                total[i] = res;
                i++; //2
            }while( tmp > 10);
        total[i] = tmp;
        
        for( int z = i+1 , x = 0 ; x < i+1 ; x++, z-- ){
            resultado += ( total[x] * z ); 
        }
    }else{
        resultado = tmp;
    }
    printf("%d ", resultado);
}