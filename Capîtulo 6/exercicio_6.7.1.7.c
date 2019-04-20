# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main () {


    int i, maior=(-1000000000), menor=1000000000, vet[10];
    printf("digite dez numeros inteiros\n");

    for (i=1; i<10; i++) {
        scanf("%d", &vet[i]);
        if (vet[i]>=maior) {
            maior=vet[i];
        } 
        if (vet[i]<=menor) {
            menor=vet[i];
        }
    }
    printf("maior numero = %d\tmenor numero = %d\n", maior, menor);

    return 0;
}