#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i, vet[8], soma=0;
    printf("digite oito numeros inteiros de 1 a 8\n");
    
    for (i=0;i<=7; i++){
        scanf("%d", &vet[i]);
        printf("%d\t", vet[i]);
    }
    printf("\n%d\t%d\n", vet[1], vet[7]);
   

    soma = vet[1] + vet[7];
    printf("soma = %d\n", soma);

    return 0;
}