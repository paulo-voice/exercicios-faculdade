#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 32
int produto,qtd;
printf("Especificacao | Codigo | Preco");
printf("\nCachorro quente | 100 | 1.20\nBauru simples | 101 | 1.30\nBauru simples com ovo | 102 | 1.50\nHamburguer | 103 | 1.20\nCheeseburguerr | 104 | 1.70\nSuco | 105 | 2.20\nRefrigerante | 106 | 1.00");
printf("\n\nDigite o codigo do produto: \n");
scanf("%d", &produto);
printf("\n\nDigite a quantidade: \n");
scanf("%d", &qtd);
switch(produto){
case 100:
    printf("Valor a ser pago: %.2f\n", qtd*1.20);
    break;
case 101:
    printf("Valor a ser pago: %.2f\n", qtd*1.30);
    break;
case 102:
    printf("Valor a ser pago: %.2f\n", qtd*1.50);
    break;
case 103:
    printf("Valor a ser pago: %.2f\n", qtd*1.20);
    break;
case 104:
    printf("Valor a ser pago: %.2f\n", qtd*1.70);
    break;
case 105:
    printf("Valor a ser pago: %.2f\n", qtd*2.20);
    break;
case 106:
    printf("Valor a ser pago: %.2f\n", qtd*1.00);
    break;
}
    return 0;
}
