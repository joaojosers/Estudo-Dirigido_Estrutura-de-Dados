#include <stdio.h>
#include <stdlib.h>

int main(){
    
    unsigned char x,y,v,w,z;
    scanf("%d\t%d",&x,&y);
    printf("x = %d\ny = %d\n",x,y);
    v = x^y;
    w=x|y;
    z=x&y;
    printf("x^y = %d\nx|y = %d\nx&y = %d\n",v,w,z);
   
     
    return 0;
}