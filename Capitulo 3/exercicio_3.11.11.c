#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
#include <math.h>

int main(){
    
    float raio, area;
    

    scanf("%f", &raio);
    area=((pow(raio,2))*(PI));

    printf("area do circulo= %f\n",area);
     
     
    return 0;
}