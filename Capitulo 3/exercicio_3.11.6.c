#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int velo_kmh,velo_ms;
    scanf("%d",&velo_kmh);
    velo_ms= velo_kmh/36;
    printf("velocidade quilometros por hora= %d\nvelocidade metros por segundo= %d\n",velo_kmh,velo_ms);
     
     
    return 0;
}