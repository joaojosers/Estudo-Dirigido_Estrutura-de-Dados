#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    
    int num, quadrado, raiz;
    
    
    scanf("%d",&num);
        if (num>0)
        raiz=sqrt(num); 
        quadrado=pow(num,2);   
        printf("numero = %d\tquadrado = %d\traiz quadrada = %d\n",num, quadrado, raiz);
          
            
    return 0;
}