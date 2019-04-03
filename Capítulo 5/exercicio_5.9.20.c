#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double i, fat=1, E=0;
    int num;
    scanf ("%d", &num);

    
    for (i=1; i<=num; i++){
        fat*=i;
        E+=(1/fat);
    }
    printf ("E = %lf\n", E);

    return 0;
    
}