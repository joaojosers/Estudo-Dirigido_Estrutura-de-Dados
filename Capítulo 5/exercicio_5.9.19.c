#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int i, j;
    double num=1, denom=1, S=0;
   
    
    

    for (i=1; i<=55; i++) {
        denom=i;
        num=1 + 2*(i-1);
        S+=(num/denom);
    }

    printf("S = %lf\n", S);
    
    

    return 0;
}