#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float valor_reais,cotacao_dolar,valor_dolares;
    scanf("%f %f",&valor_reais,&cotacao_dolar);
    valor_dolares= valor_reais/cotacao_dolar;
    printf("valor_reais= %f\ncotacao_dolar= %f\nvalor_dolares= %f\n",valor_reais,cotacao_dolar,valor_dolares);
     
     
    return 0;
}