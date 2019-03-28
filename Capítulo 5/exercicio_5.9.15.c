#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num,i,menor=1000000, maior=0;

    do {
        scanf("%d", &num);

        if(num>=0 && num<menor){
            menor=num;
        } else if (num>maior){
            maior=num;
        }
    }
    while (!(num<0));
    printf("o maior numero = %d\n", maior);
    printf("o menor numero = %d\n", menor);
    
    return 0;
}
