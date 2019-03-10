#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    
    float h;
    scanf("%f\n",&h);
    char c;
    c=getchar();
    float peso_ideal_homem, peso_ideal_mulher;
        switch (c){
        
            case 'M':
                peso_ideal_homem=72.7*h-58; 
                printf("sexo = %c\tpeso_ideal_homem = %f\n",c,peso_ideal_homem);
                break;
            case 'F':
            peso_ideal_mulher=62.1*h-44.7; 
            printf("sexo = %c\tpeso_ideal_mulher = %f\n",c,peso_ideal_mulher);
            break;
            default:printf("sexo inexistente\n");      
        } 
            
    return 0;
}