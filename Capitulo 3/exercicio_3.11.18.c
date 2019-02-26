#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x,y,z,w;
    scanf("%d\t%d",&x,&y);
    z=x<<y;
    w=x>>y;
    printf("numero_1 = %d\nnumero_2 = %d\ndeslocamento_esquerda = %d\ndeslocamento_direita = %d\n",x,y,w,z);
     
     
    return 0;
}