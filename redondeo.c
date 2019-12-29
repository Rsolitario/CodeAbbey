#include <stdio.h>

float div (float,float);
float partDecimal (float);
int redondear (float);
int partEntera (float);

int main(void)
{
    int len, i=0;
    float b, c;
    
    scanf("%d", &len);
    float a[len];
    
    while ( scanf("%f %f", &b, &c) !=  EOF){
       // printf("%f\n ", div(b,c));
        a[i] = div(b,c);
        i++;
    }
    i = 0;
   while(i < len){
        printf("%d ", partEntera(a[i]) + redondear(partDecimal(a[i])));
        i++;
   }
}

int partEntera (float elemento){
    return elemento/1;
}

float partDecimal (float elemento){
    int entera;
    float decimal;
    
    entera = elemento/1;
    decimal = elemento-entera;
    
    return decimal;
}

int redondear(float src){
    if (src > 0){
         if (src > 0.5)
        return 1;
    else
        return 0;
    }
    else{
        if( src > -0.5 )
            return -0;
        else
            return -1;
    }
   
}

float div (float dividendo, float divisor){
    if (dividendo < 0){
        if (divisor < 0)
            return -dividendo/-divisor;
        return - ( -dividendo/divisor );
    }
    else{
        if(divisor < 0)
            return - ( dividendo/-divisor ) ;
        return dividendo/divisor;
    }
}