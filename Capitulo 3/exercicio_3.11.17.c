#include <stdio.h>
#include <stdlib.h>

int main(){
    
    unsigned char x,y;
    scanf("%d",&x);
    printf("numero = %d\n",x);
    
    y=~x;
    printf("complemento = %d\n",y);
   
     
    return 0;
}