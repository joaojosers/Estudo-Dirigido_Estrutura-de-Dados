#include <stdio.h>
#include <stdlib.h>

int main(){
    char a;
    int b;
    float c;
    a = getchar();
    scanf("%d", &b);
    scanf("%f", &c);
    printf("%c %d %f\n", a,b,c);
    printf("%c\t%d\t%f\n", a,b,c);
    printf("%c\n%d\n%f\n", a,b,c);
    putchar('\n');
   
    return 0;
}