#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i, num;
    do {
        printf("digite um numero inteiro maior que 1\n");
        scanf ("%d", &num);
    } while (!(num>1));
    
    printf("num = %d\n",num);
    
    for (i=2; i<=num;) {
        if (num%i==0){
            i++; 
            if (num%i==0) {
                printf("%d nao eh numero primo\n", num);
                return 0;
            }else{
                printf("%d eh numero primo\n", num);
                return 0;
            }

        }
    }
    
return 0;
}