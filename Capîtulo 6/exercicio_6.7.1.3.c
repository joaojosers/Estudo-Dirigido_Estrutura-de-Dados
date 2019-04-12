# include <stdio.h>
# include <stdlib.h>
#include <math.h>

int main() {

    int i;
    double vet[5], soma=0, media;

    for (i=0; i<5; i++) {
        scanf("%lf", &vet[i]);
        
        soma+=vet[i];
    }
    printf("%lf\t%lf\t%lf\t%lf\t%lf\n", vet[0], vet[1], vet[2], vet[3], vet[4]);
    media=soma/5;
    printf("media = %lf\n", media);
    
    return 0;
}