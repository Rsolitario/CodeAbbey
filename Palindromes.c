#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPolindromo (char *);
void remove_character_spaces(char *);

int main (void)
{
    int len;
    scanf("%d", &len);
    char cadena[1000];
    len += 1;
    for(int i =0; i < len; i++){
        gets(cadena);
        if( i != 0)
         remove_character_spaces(cadena);
         printf("%d\t",isPolindromo(cadena));
    }
}

void remove_character_spaces(char *cadena){
    int len = strlen(cadena);
    int var = 0;
    for(int i = 0; i < len-1; i++){
        if(cadena[i] == "\'" || cadena[i] == "\!" || cadena[i] == "\"" || cadena[i] == "\#" \
        || cadena[i] == "\%" || cadena[i] == "\&" || cadena[i] == "\/" || cadena[i] == "\(" \
        || cadena[i] == "\=" || cadena[i] == "\?" || cadena[i] == "\¡" || cadena[i] == "\¿" \
        || cadena[i] == "\}" || cadena[i] == "\]" || cadena[i] == "\¨" || cadena[i] == "\´" \
        || cadena[i] == "\+" || cadena[i] == "\*" || cadena[i] == "\~" || cadena[i] == "\{" \
        || cadena[i] == "\[" || cadena[i] == "\^" || cadena[i] == "\-" || cadena[i] == "\:" \
        || cadena[i] == "\." || cadena[i] == "\;" || cadena[i] == "\<" || cadena[i] == "\>" \
        || cadena[i] == " "){
            
            cadena[i] = cadena[i+1];
        }
        
    }
}
int isPolindromo(char *cadena){
    int r, len = strlen(cadena);
    *cadena = tolower(*cadena);
    int medio = len / 2;
    r = 0;         // printf("%c", cadena[0]);
    
    for(int i = 0, j = len-1 ; i < medio && j > medio; i++, j--){
        if (cadena[i] == cadena[j] ){
            r = 1;    //  printf("%c = %c", cadena [i],cadena[j]);
        }
    }
    return r;
    
}
