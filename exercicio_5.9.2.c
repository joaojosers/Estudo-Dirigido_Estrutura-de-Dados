#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int num, i, j;
    printf("digite um numero inteiro positivo\n");
    scanf("%d", &num);
    j=num;
    for (i=0; i<=num; i++, j--) {
        printf("%d\n", j);
    }

    return 0;
}