#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 8
float nota1,nota2,media;
printf("Digite suas duas notas: ");
scanf("%f %f", &nota1,&nota2);

if((nota1>=0) && (nota1<=10) && (nota2>=0) && (nota2<=10)){
    media = (nota1+nota2)/2;
    printf("A media das notas e %.2f", media);
}
else{
    printf("Nota invalida");
}
    return 0;
}
