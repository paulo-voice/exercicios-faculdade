#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 34
float nota;
int falta;
printf("Digite a nota: ");
scanf("%f", &nota);
printf("Digite quantas faltas teve: ");
scanf("%d", &falta);
if(nota > 10 || nota < 0)
    printf("A nota deve ser entre 0 e 10\n");
else if(nota>9.0&&nota<=10.0)(falta<=20)?
    printf("Conceito A\n"):
    printf("Conceito B\n");
else if(nota>=7.5)(falta<=20)?
    printf("Conceito B\n"):
    printf("Conceito C\n");
else if(nota>=5.0)(falta<=20)?
    printf("Conceito C\n"):
    printf("Conceito D\n");
else if(nota>=4.0)(falta<=20)?
    printf("Conceito D\n"):
    printf("Conceito E\n");
else(falta<=20)?
    printf("Conceito E\n"):
    printf("Conceito E\n");
    return 0;
}
