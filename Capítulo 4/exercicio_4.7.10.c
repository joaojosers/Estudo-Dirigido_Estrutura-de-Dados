#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    double x,y,z;

    scanf("%lf\t%lf\t%lf",&x,&y,&z);

    double media_g, media_p, media_h, media_a;
    double multiplica=(x*y*z);
    
   
    media_g=cbrt(multiplica);
    media_p=((x+2*y+3*z)/6);
    media_h=(1/((1/x)+(1/y)+(1/z)));
    media_a=((x+y+z)/3);
    printf("media geometrica = %lf\n",media_g);
    printf("media ponderada = %lf\n",media_p);
    printf("media harmonica = %lf\n",media_h);
    printf("media aritmetica = %lf\n",media_a);
    return 0;
}