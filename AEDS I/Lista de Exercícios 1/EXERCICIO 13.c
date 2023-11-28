#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 13
float nota1,nota2,nota3,media;
float peso=2;
printf("Digite sua primeira nota: ");
scanf("%f", &nota1);
printf("Digite sua segunda nota: ");
scanf("%f", &nota2);
printf("Digite sua terceira nota: ");
scanf("%f", &nota3);
media = (nota1+nota2+nota3*peso)/(peso);
if (media<60){
    printf("Reprovado");
}
else{
    printf("Aprovado");
}
    return 0;
}
