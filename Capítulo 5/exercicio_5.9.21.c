#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n=0, num, i, qtd=0,maior=-1000000;

    printf("digite um numero inteiro positivo\n");
    do{
        scanf("%d",&num);
    }while (num<=0);
    printf("digite %d numeros inteiros\n", num);
    
    
    for (i=1; i<=num; i++){
        scanf("%d", &n);
    
        if(n>maior){
            maior=n;
            qtd=1;
        } else if (maior==n){
            qtd++;
        }  
              
    }
        
   
    
    printf("maior = %d\n", maior);
    printf("numero de vezes que o maior numero foi lido = %d\n", qtd);

    return 0;
    
}