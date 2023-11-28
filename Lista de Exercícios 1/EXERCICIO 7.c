#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 7
int x,y;
printf("Digite dois numeros: ");
scanf("%d %d", &x,&y);
if(x>y){
    printf("Seu maior numero eh: %d\n", x);
}
if(y>x){
    printf("Seu maior numero eh %d\n", y);
}
if(x==y){
    printf("Seus numeros sao iguais.");
}
    return 0;
}
