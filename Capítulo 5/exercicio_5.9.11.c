#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int i, num;
    printf("digite um numero inteiro positivo\n");
    scanf ("%d", &num);

    for (i=1; i<=num; i++) {
        if (num%i==00) {
            printf("Divisor = %d\n", i);
        }
    }

    return 0;
}