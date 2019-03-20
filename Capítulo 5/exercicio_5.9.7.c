#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double num, sum=0;
    int i;
    //printf ("digite 10 valores\n");

        for (i=1; i<=10; i++){
            printf ("digite o valor %d\n", i);
            scanf("%lf", &num);
            sum+=num;
        }
        printf("soma = %lf\n", sum );



    return 0;
}