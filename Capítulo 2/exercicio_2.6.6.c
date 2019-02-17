#include <stdio.h>
#include <stdlib.h>

int main(){
    double num;
    scanf("%f", &num);
    printf("Valor impresso: %e\n", num);
    /* na execucao do programa, apareceu
    advertencia de que o formato %f pede
    argumento do tipo float mas o argumento
    tem o tipo double. Na compilacao
    do programa, foi lido, por exemplo, 3.2501
    e impresso
    6.95277e-310.*/
    
    return 0;
}