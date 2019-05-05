#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int vet[8], soma=0;
    int i, X, Y;
    printf("digite oito numeros\n");
    
    for (i=0;i<=7; i++){
        scanf("%d", &vet[i]);
    }
    printf("digite um numero inteiro\n");
    
    do {
      scanf("%d",&X);  
    }while (!(X >=0 && X <=7));
    
    printf("digite outro numero inteiro\n");
    
    do {
        scanf("%d",&Y);
    }while (Y==X || !(Y >=0 && Y <=7));
    
    
   

    soma = vet[X] + vet[Y];
    printf("soma = %d\n", soma);

    return 0;
}