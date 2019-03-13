#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  main () {
    int num;
    printf("digite um numero inteiro\n");
    scanf("%d", &num);
        if (num%2==0||num%5==0){
            if (!(num%2==0&&num%5==0)){
            printf("o numero e = %d\tnumero eh divisivel por 2 ou 5\n", num);
            }else {
            printf("o numero eh divisivel por 2 e 5\n"); 
            }    
        }else{
            printf("o numero nao eh divisivel nem por 2 nem por cinco\n");
        }      
    return 0;
}