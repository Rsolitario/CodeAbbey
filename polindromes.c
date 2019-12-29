#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int isPolindromo (char *);
char *limpiar (char *);

int main (void)
{
    int len;
    scanf("%d", &len);
    char cadena[1000];
    len += 1;
    for(int i =0; i < len; i++){
        gets(cadena);
        if( i != 0){
            printf("%c ", isPolindromo(limpiar(cadena)) ? 'Y' : 'N');
        }
           
         
    }
}


char *limpiar(char *cadena){
    int len = strlen(cadena);
    char aux[2], *subcadena, goodchar[28] ="abcdefghijklmnñopqrstuvwxyz";
    subcadena = malloc(len);
    for(int indice = 0; cadena[indice] != '\0'; indice++)
        cadena[indice] = tolower(cadena[indice]);
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 28; j ++){
            if((cadena[i] == goodchar[j]) != '\0'){
                aux[0] = cadena[i];
                aux[1] = '\0';
                strcat(subcadena, aux);
            }
           
        }
       
    }
    return subcadena;
}

int isPolindromo(char *cadena){
    int r, len = strlen(cadena);
    int medio = len / 2;
    r = 1;         // printf("%c", cadena[0]);
    
    for(int i = 0, j = len-1 ; i < medio; i++, j--){
        if (cadena[i] != cadena[j] ){
            r = 0;    //  printf("%c = %c", cadena [i],cadena[j]);
        }
    }
    return r;
    
}
