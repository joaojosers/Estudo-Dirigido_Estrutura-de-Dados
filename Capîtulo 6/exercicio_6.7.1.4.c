# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {

    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    printf("soma = %d\n", soma);
    A[4]=100;
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", A[0], A[1], A[2], A[3], A[4], A[5]);

    return 0;
}