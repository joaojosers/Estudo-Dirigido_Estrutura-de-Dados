#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    int f1, f2, f3=0, num, i;
    f1=1;
    f2=1;
    printf("digite um numero inteiro positivo\n");
    scanf("%d", &num);

    if(num == 0){
        printf("O %d termo de Fibonacci = %d\n",num, 0);
        return 0;
    }
    if(num == 1 || num == 2){
        printf("O %d termo de Fibonacci = %d\n",num, 1);
        return 0;
    }
    for (i=3; i<=num ; i++ ) {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    printf("O %d termo de Fibonacci = %d\n",num, f3);
        
    return 0;
}

