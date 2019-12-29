#include <stdio.h>
int main(void){
  double resultado;
  int dato;
  char op;
  
  while( scanf("%d", &dato) != EOF){
     
    switch ( op ){
        case '+':
            resultado = resultado + dato;
        break;
        case '*':
          {  resultado = resultado * dato; printf("por ");}
        break;
        case '%':
           resultado = (int) resultado % dato;
        break;
        default:
            resultado = resultado + dato;
    }
    scanf("%c %c", &op, &op );
    printf("%f\n", resultado);
  }
   printf(" [%.0f] ", resultado);
 return 0;
}