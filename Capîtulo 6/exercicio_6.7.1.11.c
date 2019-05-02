# include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    
    int i, A[10], B[10];
    printf("digite 10 numeros naturais\n");

    for (i=0; i<10; i++) {
        scanf ("%d", &A[i]);
        B[i]=pow(A[i],2);
        printf("%d\t%d\n",A[i], B[i]);
        
    }
    

    return 0;
}