#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    
    float pc, pf;
    scanf("%f\n",&pc);
    char u,f;
    u=getchar();
    f=getchar();
    
        if (u=='M'&&f=='G'){
        pf=pc*1.07; 
        printf("Estado = %c%c\tpreco de custo = %f\tprecofinal = %f\n",u,f,pc, pf);
        }else if(u=='S'&&f=='P'){
        pf=pc*1.12; 
        printf("Estado = %c%c\tpreco de custo = %f\tprecofinal = %f\n",u,f,pc, pf); 
        }else if(u=='R'&&f=='J'){
        pf=pc*1.15; 
        printf("Estado = %c%c\tpreco de custo = %f\tprecofinal = %f\n",u,f,pc, pf); 
        }else if (u=='M'&&f=='S'){
        pf=pc*1.08; 
        printf("Estado = %c%c\tpreco de custo = %f\tprecofinal = %f\n",u,f,pc, pf);   
        }else{
        printf("Estado Inexistente\n");
        }
        
        
            
    return 0;
}