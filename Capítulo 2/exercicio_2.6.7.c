#include <stdio.h>
#include <stdlib.h>

int main(){
    char caractere;
    caractere = getchar();
    
    printf("Codigo ASCii: %d\n", caractere);
    putchar('\n');
   /* Por exemplo, digitando-se o caractere arroba,
   imprime-se o codigo ASCii: 64.*/

    return 0;
}