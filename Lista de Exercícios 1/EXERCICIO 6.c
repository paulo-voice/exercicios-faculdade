#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 6
int x,y;
printf("Digite dois numeros: ");
scanf("%d %d", &x,&y);
if(x>y){
    printf("Seu maior numero eh: %d\n", x);
    printf("A diferenca entre eles é de: %d", x-y);
}
if(y>x){
    printf("Seu maior numero eh %d\n", y);
    printf("A diferenca entre eles é de: %d", y-x);
}
    return 0;
}
