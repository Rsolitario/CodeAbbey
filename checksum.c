#include <stdio.h>

int countD ( int );

int main(void){
    int len, cont;
   long long a = 0, result = 0;
    scanf("%d", &len);
    for ( int i = 0 ; i < len+1; i++){
        if( countD(a) < 6 ){
            a *= 113; 
            scanf("%d", &result);//printf("menor %d\n",a);
            a += result;
        }else{
            a = (a * 113) % 10000007; //printf(" mayor %d\n",a);
            if( scanf("%d", &result) != EOF)//printf("%d\t\t", result);
                a += result;
        }
        
    }
    printf("%d ", a);
    return 0;
}

int countD (int a){
    int num = 1;
    while(a/10 > 0){
        a /= 10;
        num++;
    }
    //printf(" %d ", num);
    return num;
}