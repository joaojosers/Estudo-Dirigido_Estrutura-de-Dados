#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {



    int i, vet[10], aux[10];

    for (i=0; i < 10; i++) {
        scanf("%d", &vet[i]);
        aux[i] = vet[i];
    }
    for (i=0; i < 9; i++) {
        if (vet[i] == vet[i+1]) {
            //if ( vet[i] != aux [i] ) {
            printf("%d\n", vet[i] );
        
        }    
    }  
    for (i=0; i < 8; i++) {
        if ( vet[i] == vet[i+2] ) {
            
            if ( vet[i] != aux [i] ) {
                printf("%d\n", vet[i] );
            }
        }    
    }       
    for (i=0; i < 7 ; i++) {
             if ( vet[i] == vet[i+3] ) {
                 
                 if (vet[i]!= aux[i] ) {
                    printf("%d\n", vet[i] );
                }
             }
    }        
    for (i=0; i < 6 ; i++) {
             if ( vet[i] == vet[i+4] ) {
                 
             
                 if (vet[i]!= aux[i] ) {
                    printf("%d\n", aux[i] );
                }
             }
    }
    for (i=0; i < 4 ; i++) {
             if ( vet[i] == vet[i+5] ) {
                
                 if ( vet[i]!= aux[i] ) {
                    printf("%d\n", vet[i] );
                }
             }
    }
    for (i=0; i < 3 ; i++) {
             if (vet[i] == vet[i+6] ) {
                
                 if ( vet[i]!= aux[i]) {
                    printf("%d\n", vet[i] );
                }
             }
    }
    for (i=0; i < 2 ; i++) {
             if ( vet[i] == vet[i+7] ) {
                
                 if ( vet[i]!= aux[i] ) {
                    printf("%d\n", vet [i] );
                }
             }
    }
    for (i=0; i < 1 ; i++) {
             if ( vet[i] == vet[i+8] ) {
                
                if ( vet[i]!= aux[i] ) {
                    printf("%d\n", vet[i] );
                }
             }
    }
   for (i=0; i < 10 ; i++) {
             if (vet[i] == vet [i+9]) {
                 
                 if ( vet[i]!= aux[i] ) {
                    printf("%d\n", vet[i] );
                }
             }
    }
            
    return 0;
}