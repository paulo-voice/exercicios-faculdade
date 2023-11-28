#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 9
float salario, emprestimo;
printf("Digite o seu salario: ");
scanf("%f", &salario);
printf("Digite o valor da sua prestacao: ");
scanf("%f", &emprestimo);
if(emprestimo>salario * 0.2){
    printf("Emprestimo nao concedido");
}
else{
    printf("Emprestimo concedido");
}
    return 0;
}
