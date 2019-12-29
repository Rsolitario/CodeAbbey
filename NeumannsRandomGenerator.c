#include <stdio.h>

int Repite(int);

int var, y, control[1000];


int main(void)
{
    int len;
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
        y = 0;
        scanf("%d", &var);
        control[y] = var;
        Repite(var);
        printf("%d ", y);
        
    }
}

int Repite(int var){
    y++;
    int cnt = y;
    var *= var;
    var = (int) var/100;
    var = var % 10000;
    while(cnt--){
        if(var == control[cnt]){
            return var;
        }
    }
        control[y] = var;
        return Repite(var);
}