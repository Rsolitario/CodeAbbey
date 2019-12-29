#include <stdio.h>
int mcd(int, int);

int main(void){
    // Your code here!
    int len;
    int A, B, mcd_ = 0;
    scanf("%d", &len);
    while(len--){
        scanf("%d %d", &A, &B);
        mcd_ = mcd(A, B);
        printf("(%d, %d) ", mcd_ , (A * B) / mcd_);
    }
}

int mcd(int a, int b){
    int r;
    if(b != 0){
        r = a % b;
        return mcd(b,r);
    }else{
        return a;
    }
        return 0;
}