#include <stdio.h>
// Body Mass Index
void BMI (int, float);
int main(void)
{
    int len;
    scanf("%d", &len);
    int a;
    float b;
   for (int i = 0 ; i < len ; i++){
       scanf("%d %f", &a, &b);
       BMI(a, b);
   }
}



void BMI (int peso, float estatura){
    float tmp = peso/ (estatura * estatura);
    tmp < 18.5 ? printf("under ") : tmp < 25 ? printf("normal ") : tmp < 30 ? printf("over ") : tmp < 40 ? printf("obese ") : printf("Error");
}
