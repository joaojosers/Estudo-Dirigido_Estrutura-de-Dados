#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int num;
    printf("digite um numero inteiro de 1 a 12\n");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("Entrada = %d.\tSaida = Janeiro.\n", num);
            break;
        case 2:
            printf("Entrada = %d.\tSaida = Fevereiro.\n", num);
            break;
        case 3:
             printf("Entrada = %d.\tSaida = Marco.\n", num);
            break;
        case 4:
             printf("Entrada = %d.\tSaida = Abril.\n", num);
            break;
        case 5:
             printf("Entrada = %d.\tSaida = Maio.\n", num);
            break;
        case 6:
             printf("Entrada = %d.\tSaida = Junho.\n", num);
            break;
        case 7:
             printf("Entrada = %d.\tSaida = Julho.\n", num);
            break;
        case 8:
             printf("Entrada = %d.\tSaida = Agosto.\n", num);
            break;
        case 9:
             printf("Entrada = %d.\tSaida = Setembro.\n", num);
            break;
        case 10:
             printf("Entrada = %d.\tSaida = Outubro.\n", num);
            break;
        case 11:
             printf("Entrada = %d.\tSaida = Novembro.\n", num);
            break;
        case 12:
             printf("Entrada = %d.\tSaida = Dezembro.\n", num);
            break;                 
        default:
            printf("numero invalido");
            break;
    }







    return 0;
}