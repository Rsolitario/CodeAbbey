#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct var{
        char a[100];
        struct var *sig;
    };

struct var *primero, *ultimo;

int contarVocales (char *);
void push();

int main(void)
{
    int len=3;
   scanf("%d", &len);
    for( int i = 0; i < len+1; i++){
       push();
    }
    
    struct var *aux;
    aux = primero->sig;
    while(aux != NULL){
        printf("%d ",contarVocales(aux->a));
        aux = aux->sig;
    }
    return 0;
}

void push(){
	struct var *nuevo;
	nuevo = (struct var *) malloc (sizeof(struct var));//fflush(stdin);
	if( nuevo == NULL)
		printf("No hay memoria suficiente");
//	for ( int i = 0; c[i] != '\n'; ++i)
	gets(nuevo->a); 
	nuevo->sig = NULL;
	
	//Ingresando la nueva lista.
	if (primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}
	else{
		ultimo->sig = nuevo;
		ultimo = nuevo;
    }
}

int contarVocales(char *cadena){
	int vocales = 0;
 
	// Recorrer toda la cadena
	for (int indice = 0; cadena[indice] != '\0'; ++indice){
 
		// Obtener el char de la posición en donde está el índice
		// y por otro lado convertirla a minúscula
 
		// Así no importa si ponen 'A' o 'a', ambas letras serán convertidas a 'a'
		char letraActual = tolower(cadena[indice]);
 
 
		if (
			letraActual == 'a' || 
			letraActual == 'e' || 
			letraActual == 'i' || 
			letraActual == 'o' || 
			letraActual == 'u' ||
			letraActual == 'y'
			)
		{
			vocales++;
		}
	}
	return vocales;
}