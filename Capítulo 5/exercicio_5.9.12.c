#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int i, num, soma=0;
    printf("digite um numero inteiro positivo\n");
    scanf ("%d", &num);

    for (i=1; i<num; i++) {
        if (num%i==00){
            printf("Divisor = %d\n", i);
            soma+=i;
        }
    }    
    
    printf("soma dos divisores do numero exceto ele proprio = %d\n", soma);   
    

    return 0;
}