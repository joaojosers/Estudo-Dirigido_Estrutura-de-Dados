#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {


    int i, j, vetinput[10], vetcontador[1000];
    
    for (i=0; i < 10; i++) {
        scanf("%d", &vetinput[i]);   
    }
    for (i=0; i < 1000; i++) {
        vetcontador[i] = 0;   
    } 
    for (i=0; i < 10; i++) {
        vetcontador[vetinput[i]]++;   
    }
    for (i=0; i < 1000; i++) {
         if (vetcontador[i] > 1) {
             printf("%d\n", i );
         } 
    }  
    
    return 0;
}