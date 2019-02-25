#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float temp_celsius,temp_fahrenheit;
    scanf("%f",&temp_celsius);
    temp_fahrenheit=(temp_celsius*(9.0/5.0)+32);
    printf("temp_celsius= %f\ntemp_fahrenheit= %f\n",temp_celsius,temp_fahrenheit);
     
     
    return 0;
}