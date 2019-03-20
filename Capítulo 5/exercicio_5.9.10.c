#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){

    int num,i, numLidos = 0;
    double soma=0,media=0;

    i = 1;
   while (!(numLidos==10)){
       printf("digite o numero %d\n",i);
       scanf("%d", &num);
        if (num>0){
            numLidos++;
            soma+=num;
            i++;
        }else{
            printf("Numero deve ser positivo\n");
        }
   }
    media=soma/numLidos;
    printf("media = %lf\n", media); 

    return 0;
}
