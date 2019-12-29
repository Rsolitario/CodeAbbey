#include <stdio.h>
#include <string.h>

void rotar(char *, int);

int main(void){
    int s, len;
    scanf("%d", &len);
    len;
    char cadena[1000];
    for(int i = 0; i < len; i++){
            scanf("%d %s", &s, cadena);
            rotar(cadena, s);
            printf("%s ", cadena);
    }
}

void rotar(char *cadena, int s){
    int len = strlen(cadena);
    if(s > 0){
        for(int i = 0; i < s; i++){
            char tmp;
            tmp = cadena[0];
            for(int j = 0; j < len; j++){
                if (j != len-1)
                    cadena[j] = cadena[j+1];
                else
                    cadena[j] = tmp;  
            }
        }
    }
    else{
        for(int i = 0; i < (-s); i++){
            char tmp;
            tmp = cadena[len-1];
            for(int j = len-1; j > -1; j--){
                if (j != 0)
                    cadena[j] = cadena[j-1];
                else
                    cadena[j] = tmp;  
            }
        }
    }
}