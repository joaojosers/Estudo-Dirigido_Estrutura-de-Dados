#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;
    scanf("%f", &num);
    printf("Valor lido: %d\n", num);
    
    /* Na execucao do programa, apareceu a advertencia de que o formato %d pede um argumento do tipo inteiro mas o argumento tem formato de double. E na compilacao, o valor lido foi 1, diferente do valor digitado 3.25. */ 
    return 0;
}