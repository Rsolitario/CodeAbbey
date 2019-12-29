#include <stdio.h>

void checksum(int *, int);
int countD(int);

int main(void){
    // Your code here!
    int len, pases = 0, swaps = 0;
    //scanf("%d", &len);
    int B[1000], i = 0;
   while(scanf("%d", &B[i]) != -1){
        i++;
	}
	len = i-1;
	int A[len];
	for(int i =0; i < len; i++){
	    if(B[i] != -1)
	        A[i] = B[i];
	}
	for(int i =0; i< len; i++)printf("%d", A[i]);
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
    }for(int i =0; i< len; i++)printf("%d\t", A[i]);
    printf("(%d %d)", pases, swaps);
    checksum(&A, len);
    
}

void checksum (int *vector, int len){
    int cont;
    long long a = 0, result = 0;
    for ( int i = 0 ; i < len+1; i++){
        if( countD(a) < 6 ){
            a *= 113; 
                                        //printf("menor %d\n",a);
            a += vector[i];
        }else{
            a = (a * 113) % 10000007; //printf(" mayor %d\n",a);
                                    //printf("%d\t\t", result);
                a += vector[i];
        }
        
    }
    printf("%d ", a);
}

int countD (int a){
    int num = 1;
    while(a/10 > 0){
        a /= 10;
        num++;
    }
    //printf(" %d ", num);
    return num;
}