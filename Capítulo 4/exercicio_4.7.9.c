#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    float h;
    int p;
    scanf("%f\t%d", &h, &p);

    if (h<1.20 && p<60){

        printf("altura = %f\tpeso = %d\tclassificacao = A\n", h, p);
    }
    else if (h<1.20 && (p>=60&&p<=90)){
        printf("altura = %f\tpeso = %d\tclassificao = D\n", h,p);
    }
    else if (h<1.20 && p>90){
        printf("altura = %f\tpeso = %d\tclassificao = G\n", h,p);
    }else if ((h>=1.20 && h<=1.70) && (p<60)){
        printf("altura = %f\tpeso = %d\tclassificao = B\n", h,p);
    }else if ((h>=1.20 && h<=1.70) && (p>=60&&p<=90)){
        printf("altura = %f\tpeso = %d\tclassificao = E\n", h,p);
    }else if ((h>=1.20 && h<=1.70) && p>90){
        printf("altura = %f\tpeso = %d\tclassificao = H\n", h,p);
    }else if (h>1.70 && p<60){
        printf("altura = %f\tpeso = %d\tclassificao = C\n", h,p);
    }else if (h>1.70 && (p>=60 && p<=90)){
        printf("altura = %f\tpeso = %d\tclassificao = F\n", h,p);
    }else if (h>1.70 && p>90){
        printf("altura = %f\tpeso = %d\tclassificao = I\n", h,p);
        }

    return 0;
}