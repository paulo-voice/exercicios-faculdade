#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 4
int x,y;
printf("Digite um numero: ");
scanf("%d", &x);
if (x>0){
    y=x;
    x=pow(x,2);
    y=sqrt(y);
    printf("Seu numero ao quadrado eh: %d\n", x);
    printf("A raiz quadrada do seu número eh: %d", y);
}
    return 0;
}
