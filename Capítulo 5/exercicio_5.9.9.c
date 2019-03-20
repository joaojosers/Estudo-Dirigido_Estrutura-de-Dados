#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double num, aux=0, menor=1000001, maior=-1000001;
    int i;

    for (i=1; i<=10; i++){
        printf ("digite o valor %d\n", i);
        scanf("%lf", &num);
        aux=num;
        if (aux>maior){
            maior=aux;
        } 
        if (aux<menor){
            menor=aux;
        }  
    } 
    printf("o maior valor eh = %lf\n", maior);
    printf("o menor valor eh = %lf\n", menor);

    return 0;
}