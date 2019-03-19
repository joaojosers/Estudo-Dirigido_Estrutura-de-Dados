#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int num, i;
    printf("digite um numero inteiro positivo\n");
    scanf("%d", &num);
    for (i=0; i<=num; i++) {
        printf("%d\n", i);
    }

    return 0;
}