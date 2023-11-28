#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 18
int entrada, resultado;
printf("Olá, digite a operação matemática que você deseja utilizar: \n1- Soma \n2- Subtração \n3- Multiplicação \n4- Divisão\n\n");
scanf("%d", &entrada);
if(entrada!=1&&entrada!=2&&entrada!=3&&entrada!=4){
    printf("Inválido!");
}
int a,b;
printf("Digite o primeiro valor: ");
scanf("%d", &a);
printf("Digite o segundo valor: ");
scanf("%d", &b);
if(entrada==1){
    printf("Resultado: %d", resultado=a+b);
}
else if(entrada==2){
    printf("Resultado: %d", resultado=a-b);
}
else if(entrada==3){
    printf("Resultado: %d", resultado=a*b);
}
else if(entrada==4){
    printf("Resultado: %d", resultado=a/b);
}
    return 0;
}
