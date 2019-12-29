#include <stdio.h>

int main(void){
    // Your code here!
    int pases = 0, swaps = 0;
    int aux, len=0;
    scanf("%d", &len);
    int A[len];
    for(int i = 0; i < len; i++){
        scanf("%d", &A[i]);
    }
    
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if( A[j] > A[j+1] ){
                swaps++;
                aux     = A[j+1];
                A[j+1]  = A[j];
                A[j]    = aux;
            }
        }
    pases++;
    }
        
    printf("\n%d %d", pases, swaps);
    
    return 0;
}