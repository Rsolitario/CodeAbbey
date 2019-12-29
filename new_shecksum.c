#include <stdio.h>

int shecksum (int *, int);

int main(void){
   int len;
   scanf("%d", &len);
   int a[len];
    for(int i = 0; i < len; i++ ){
       scanf("%d", &a[i]);
   }
   int result = shecksum(&a, len);
   printf("%d", result);
}

int shecksum (int *src, int len){
    int result;
    for(int i = 0; i < len; i++ ){
       result += src[i];
       result *= 113;
       result %= 10000007;
    }
    return result;
}
