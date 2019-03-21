# include <stdio.h>
# include <stdlib.h>
#include <math.h>

int main (){

    int i, soma=0;
    for( i=1000; i>0; i--){
        if (i%3==0 || i%5==0) {
            printf("multiplo de 3 ou 5 = %d\n",i );
            soma+=i;
        }
    }
    printf("soma dos multiplos de 3 ou 5 = %d\n", soma);



    return 0;
}