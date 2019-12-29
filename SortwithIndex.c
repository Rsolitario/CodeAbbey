#include <stdio.h>
int main(void){
    // Your code here!
    int len, pases = 0, swaps = 0, otro = 0;
    scanf("%d", &len);
    int A[len][2];
    for(int i = 0; i < len; i++){
        scanf("%d", &A[i][0]);
        A[i][1] = i+1;
	}
    int var = 1;
	while(var){
		var = 0;
        for(int y = 0; y < len; y++){
            if(A[y][0] > A[y+1][0]){
                int pos = 0, aux = 0;
				var = 1;
				
                aux         = A[y][0];
                A[y][0]     = A[y+1][0];
                A[y+1][0]   = aux;
                
                pos         = A[y][1];
                A[y][1]     = A[y+1][1];
                A[y+1][1]   = pos;
                swaps++;
            }
        }pases++;
	}

    for(int j = 0; j < len; j++){
        printf("%d => %d\n ", A[j][0], A[j][1]);   
    }
    
		
    //printf("\n(%d %d)", pases, swaps);
    return 0;
}
