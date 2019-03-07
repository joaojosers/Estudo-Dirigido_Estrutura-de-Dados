#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x,y;
    scanf("%d %d",&x, &y);
        if (x>y)
            printf("o maior e: %d\n",x);
        else
            if (x<y)
                printf("o maior e: %d\n",y);    
            else
                printf("os numeros sao iguais\n");
    return 0;
}