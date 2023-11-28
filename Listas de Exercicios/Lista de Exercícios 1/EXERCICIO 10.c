#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 10
int sexo;
float altura, resultado;
printf("Escreva 1 para o sexo masculino e 2 para o feminino: ");
scanf("%d", &sexo);
printf("Escreva sua altura: ");
scanf("%f", &altura);
if(sexo==1){
    resultado=(72.7*altura-58);
}
else if(sexo==2){
    resultado=(62.1*altura-44.7);
}
printf("Seu peso ideal eh: %f", resultado);
    return 0;
}
