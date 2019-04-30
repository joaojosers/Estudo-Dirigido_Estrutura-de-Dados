# include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
     
     int j = 0,i = 1, vet[100], qtd=0;
    
    while(qtd < 100){
        if(i % 7 != 0){
            vet[j] = i;
            qtd++;
            printf("%d\n", vet[j]);
            j++;
        }

        i++;
    }

    
    
    return 0;
}