#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    printf("Digite um operador matematica\n");
    char caractere;
    caractere=getchar();

    printf("Digite dois numeros\n");
    double num1, num2, op1, op2, op3, op4;
    scanf("%lf\v%lf",&num1, &num2);

    switch (caractere) {
    case '+':
    op1=num1+num2;
    printf("operador = '+'\tsoma = %lf\n", op1);
    break;
    case '-':
    op2=num1-num2;
    printf("operador = '-'\tsubtracao = %lf\n", op2);
    break;
    case '*':
    op3=num1*num2;
    printf("operador = '*'\tmultiplicacao = %lf\n", op3);
    break;
    case '/':
    op4=num1/num2;
    printf("operador = '/'\tdivisao = %lf\n", op4);
    break;
    default:
    printf("operador invalido");
    }

 return 0;
}   





    