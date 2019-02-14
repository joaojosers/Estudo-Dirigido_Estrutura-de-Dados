#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    scanf("%d", &num);
    printf("Valor lido: %f\n", num);
    
    /* Na execucao do programa, apareceu a advertencia de que o formato %f pede um argumento do tipo double mas o argumento tem formato de inteiro. E na compilacao, o valor lido foi 0.000000, diferente do valor digitado 3. */ 
    return 0;
}