#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPolindromo (char *);
char *remove_character_spaces(char *, char *);

int main (void)
{
    int len;
    scanf("%d", &len);
    char cadena[1000], sub_cadena[1000];
    len += 1;
    for(int i =0; i < len; i++){
        gets(cadena);
        if( i != 0 ){
            printf("%d\n",isPolindromo(remove_character_spaces(cadena, sub_cadena)));
           // printf("%s\n", sub_cadena);
           // printf("%d\n", strlen(sub_cadena));
        }
    }
}

char *remove_character_spaces(char *cadena, char *sub_cadena){
    int y, cont = 0, len = strlen(cadena);
    char tmp;
    char *subcadena, *aux;
    for(int i = 0; i < len; i++){
        if(cadena[i] == '(' ){
            tmp        = cadena[i];
            cont++;
            for(int j = 0; j < len; j++){
                if( j == len-1)
                    cadena[j]   = tmp;
                else
                    cadena[j]   = cadena[j+1];
            }
        }
    }printf("%s\n", cadena);                //{printf para verificar}
    
    subcadena = malloc(len-cont+1);
    for(y = 0; y < len-cont; y++)
       if((subcadena[y] = cadena[y]) == "\0")
            break;
        subcadena[y] = '\0';
    if ((aux = realloc(subcadena, y + 1)) == NULL){
      free(subcadena);
      return NULL;
   }else
      subcadena = aux;
   return subcadena; 
        
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
