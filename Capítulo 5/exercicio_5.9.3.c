#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num, i,j;
    printf ("Digite um numero inteiro positivo\n");
    scanf("%d", &num);
        
        for ( i=0; i<=num; i++) {
            /*if (!(i%2==0))*/
            
            if  (i%2==1){
                printf("\n%d\n", i);
            }
        }
        
    return 0;
}