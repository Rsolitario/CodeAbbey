#include <stdio.h>
#include <string.h>

int main (void)
{
    char cadena[1000];
    gets(cadena);
    int len = strlen(cadena);
    while(len--)
        printf("%c",cadena[len]);
}