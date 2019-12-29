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
        if (c == 1)
            return a;
            c -= 1;
       return  (a + (c*b)) + PAritmetica (a, b, c );
        
}