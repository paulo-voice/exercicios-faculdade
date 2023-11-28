#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 5
int x;
printf("Digite um número: ");
scanf("%d", &x);
x=x%2;
if(x==1){
    printf("Seu numero eh impar.\n");
}
if(x==0){
    printf("Seu numero eh par.\n");
}
    return 0;
}
