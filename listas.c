#include <stdio.h>
#include <stdlib.h>

struct var{
        int a;
        struct var *sig;
    };

    struct var *primero, *ultimo;
    
    void push(int);
    int max();
    int min();
    
int main ()
{
    int N;    
    
   while (scanf("%d",&N) != EOF )
		push(N);
   printf( "%d %d", max(), min() );
  
   return 0;
   
}

void push(int c){
	struct var *nuevo;
	nuevo = (struct var *) malloc (sizeof(struct var));
	if( nuevo == NULL)
		printf("No hay memoria suficiente");
	nuevo->a = c;
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

int max (){
	struct var *aux;
	int resul;
	resul = primero->a;
	aux = primero->sig;
	while (aux != NULL){		
		if( resul < aux->a)
			resul = aux->a;
		aux = aux->sig;
	}
	return resul;
}

int min (){
	struct var *aux;
	int resul;
	resul = primero->a;
	aux = primero->sig;
	while (aux != NULL){		
		if( resul > aux->a)
			resul = aux->a;
		aux = aux->sig;
	}
	return resul;
}