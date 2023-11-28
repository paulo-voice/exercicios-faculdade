#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 11
int soma=0,num,y;
printf("Digite o numero que vc quer: ");
scanf("%d", &num);
if(num<0){
    printf("Numero invalido");
    return 0;
}
while(num>0){
    y=num%10;
    soma=soma+y;
    num=num/10;
}
printf("A soma eh: %d", soma);
    return 0;
}
