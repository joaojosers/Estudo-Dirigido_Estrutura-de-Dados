#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main(){
    
    float a, b, hipotenusa, soma_quadrados;
    

    scanf("%f\t%f",&a,&b);
    soma_quadrados=pow(a,2)+pow(b,2);
    hipotenusa=sqrt(soma_quadrados);

    printf("cateto a= %f\ncateto b= %f\nhipotenusa= %f\n",a,b,hipotenusa);
     
     
    return 0;
}