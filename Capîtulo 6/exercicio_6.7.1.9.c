# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main (){

    int i, j, k, A[10], B[10], C[10];
    for (i=0; i<=9; i++) {
        scanf("%d", &A[i]);
        //printf("%d\t", A[i]);
    }
    for (i=0; i<=9; i++) {
        scanf("%d", &B[i]);
        //printf("%d\t", B[i]);
    }
    for (i=0; i<=9; i++) {
        C[i]=A[i]+B[i];
    }     
    for (i=0; i<=9; i++){
        printf("%d\t", C[i]);
    }
    printf("\n");
    return 0;
}