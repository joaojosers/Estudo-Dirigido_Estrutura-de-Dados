#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    int i=0, soma=0;

        for (i=0; i<100; i++) {
            if (i%2==0){
            soma+=i;  
            }  
        }
    printf("%d\n", soma);   

    return 0;
}