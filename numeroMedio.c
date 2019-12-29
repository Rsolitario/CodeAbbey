#include <stdio.h>

int medio (int, int, int);
int main(void)
{
    int len;
    scanf("%d", &len);
    int a,b,c;
    while(len--){
        scanf("%d %d %d", &a, &b, &c);
        printf("%d ", medio(a,b,c));
    }
}

int medio(int src, int src_2, int src_3){
    if (src < src_2) {
        if( src_2 < src_3)
            return src_2;
        else
            return src_3;
    }else{
        if ( src < src_3)
            return src;
        else{
            if (src_2 < src_3)
                return src_2;
            else
                return src_3;
        }
    }
        
   
}