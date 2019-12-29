#include <stdio.h>
int main(void){
    // Your code here!
    int len, pases = 0, swaps = 0, otro = 0;
    scanf("%d", &len);
    int A[len], B[len], c[len];
    for(int i = 0; i < len; i++){
        scanf("%d", &A[i]);
	}
	for(int i = 0; i < len; i++)B[i] = A[i];
    int var = 1;
	while(var){
		var = 0;
        for(int y = 0; y < len; y++){
            if(A[y] > A[y+1]){
                int aux = 0;
				var = 1;
                aux     = A[y];
                A[y]    = A[y+1];
                A[y+1]  = aux;
                swaps++;
            }
        }pases++;
	}

    for(int j = 0; j < len; j++){
        for(int i = 0; i < len; i++){
            if(A[j] == B[i])
               printf("%d ", len);
        }
    }
		
    //printf("\n(%d %d)", pases, swaps);
    return 0;
}
