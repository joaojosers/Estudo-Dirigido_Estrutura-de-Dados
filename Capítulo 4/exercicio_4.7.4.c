#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float sal, prest;

    scanf("%f\t%f",&sal,&prest);
        if (prest>(sal*0.2))
            printf("sal = %f\tprest = %f\tEmprestimo nao concedido\n",sal, prest);
        else
            printf("Emprestimo concedido\n");   
            
    return 0;
}