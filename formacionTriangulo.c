#include <stdio.h>

int PAritmetica (int, int, int);
int main(void)
{
    int len;
    scanf("%d", &len);
    int a, b, c;
   for (int i = 0 ; i < len ; i++){
       scanf("%d %d %d", &a, &b, &c);
       printf("%d ", PAritmetica(a,b,c));
   }
}



int PAritmetica ( int a, int b, int c){
       if(a > b && a > c){
           return a < (b+c) ? 1:0;
       }
        if(b > a && b > c){
           return b < (a+c) ? 1:0;
       }
        if(c > a && c > b){
           return c < (b+a) ? 1:0;
       }
	   return -1;
}