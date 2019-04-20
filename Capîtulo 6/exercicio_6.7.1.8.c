# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main (){

    float qtd=0, vet[10], SomaPositivo=0;
    int i;

    for (i=0; i<=9; i++) {
        scanf("%f", &vet[i]);
        if (vet[i]<0){
            qtd++;
        }
        if (vet[i]>0){
            SomaPositivo+=vet[i];
        }
    }
    printf("quantidade de negativos = %f\tsoma de positivos = %f\n", qtd, SomaPositivo);

    return 0;
}