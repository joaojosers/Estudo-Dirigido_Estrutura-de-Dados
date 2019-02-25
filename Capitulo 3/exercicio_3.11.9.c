#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main(){
    
    int angulo_graus;
    float angulo_radiano;
    scanf("%d",&angulo_graus);
    angulo_radiano=(angulo_graus*(PI/180));
    printf("angulo_graus= %d\nangulo_radiano= %f\n",angulo_graus, angulo_radiano);
     
     
    return 0;
}