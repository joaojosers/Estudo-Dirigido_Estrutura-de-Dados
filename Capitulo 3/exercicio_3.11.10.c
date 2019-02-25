#include <stdio.h>
#include <stdlib.h>
#define premio 780000.00

int main(){
    
    float premio_1, premio_2, premio_3, percentual_3, soma_premios;
    premio_1=((premio)*(0.46));
    premio_2=((premio)*(0.32));
    percentual_3=(1-(0.46)-(0.32));
    premio_3=(premio*percentual_3);
    soma_premios=premio_1+premio_2+premio_3;
    
    printf("premio do primeiro ganhador= %f\npremio do segundo ganhador= %f\npremio do terceiro ganhador= %f\nsoma dos premios= %f\n",premio_1,premio_2,premio_3,soma_premios);
     
     
    return 0;
}