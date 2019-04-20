# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main () {

    int i, qtd=0, vet[10];
    printf("digite dez numeros inteiros\n");
    for (i=0; i<9; i++) {
        scanf("%d", &vet[i]);
        if (vet[i]%2==0) {
            qtd++;
        }
    }
    printf("quantidade de numeros pares = %d\n", qtd);
    
    return 0;
}

