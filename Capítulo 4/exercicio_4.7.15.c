# include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

double a, b, c;
printf("Digite os coeficientes da equacao de segundo grau\n");
scanf("%lf\t%lf\t%lf",&a,&b,&c);
double delta =pow(b,2)-4*a*c;
double r =(-b+sqrt(delta))/(2*a);

double r2=(-b-sqrt(delta))/(2*a);
    
    if (delta<0){
        printf("Nao existe raiz\n");
    }else if (delta==0){
        printf("Raiz unica = %lf\n", r);    
    }else if (delta>0){
        printf("Exixtem duas raizes reais: raiz 1 = %lf\traiz 2 = %lf\n", r, r2);
        }
    






    return 0;
}