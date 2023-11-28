#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 23
int ano;
printf("Digite o ano que voce quer analisar: \n");
scanf("%d", &ano);
if((ano%400==0) || (ano%4==0&&ano%100!=0)){
    printf("Ano bissexto");
}
else{
    printf("Nao eh um ano bissexto");
}
    return 0;
}
