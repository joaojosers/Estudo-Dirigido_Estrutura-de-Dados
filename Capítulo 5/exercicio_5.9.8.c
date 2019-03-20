#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double num, sum=0,avg;
    int i;
    //printf ("digite 10 valores\n");

        for (i=1; i<=10; i++){
            printf ("digite o valor %d\n", i);
            scanf("%lf", &num);
            sum+=num;
            avg=sum/10;
        }
        printf("media = %lf\n", avg );



    return 0;
}