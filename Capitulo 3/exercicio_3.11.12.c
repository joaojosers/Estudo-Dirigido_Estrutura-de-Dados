#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
#include <math.h>

int main(){
    
    float raio, altura, volume;
    

    scanf("%f\t%f",&raio,&altura);
    volume=(PI*(pow(raio,2))*altura);

    printf("raio= %f\naltura= %f\nvolume= %f\n",raio,altura,volume);
     
     
    return 0;
}