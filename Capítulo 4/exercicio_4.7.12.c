#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int num;
    printf("digite um numero inteiro de 1 a 7\n");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("Numero = %d\tDomingo\n", num);
            break;
        case 2:
            printf("Numero = %d\tSegunda-Feira\n", num);
            break;
        case 3:
             printf("Numero = %d\tTerca-Feira\n", num);
            break;
        case 4:
             printf("Numero = %d\tQuarta-Feira\n", num);
            break;
        case 5:
             printf("Numero = %d\tQuinta-Feira\n", num);
            break;
        case 6:
             printf("Numero = %d\tSexta-Feira\n", num);
            break;
        case 7:
             printf("Numero = %d\tSabado\n", num);
            break;                
        default:
            printf("numero invalido");
            break;
    }







    return 0;
}