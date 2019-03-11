#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    
    int idade;
    scanf("%d",&idade);
    
    
        if (idade>=5&&idade<=7){
         
        printf("Idade = %d\tCategoria = Infantil A\n",idade);

        }else if(idade>=8&&idade<=10){
        printf("Idade = %d\tCategoria = Infantil B\n",idade);
        }else if(idade>=11&&idade<=13){
         printf("Idade = %d\tCategoria = Juvenil A\n",idade);
        }else if (idade>=14&&idade<=17){
        printf("Idade = %d\tCategoria = Juvenil B\n",idade);   
        }else{
        printf("Idade = %d\tCategoria = Senior\n",idade);
        }
        
        
            
    return 0;
}