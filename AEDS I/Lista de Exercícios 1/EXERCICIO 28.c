#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 28
float a,b,c;
int media;
printf("Digite 3 valores inteiros positivos: \n");
scanf("%d %d %d", &a,&b,&c);
printf("Qual media deseja calcular?\n");
scanf("%d", &media);
switch(media){
    case 1:
        printf("Media Geometrica %.2f\n", a*b*c);
        break;
    case 2:
        printf("Media Ponderada %.2f\n", (a+2*b+3*c)/6);
        break;
    case 3:
        printf("Media Harmonica %.2f\n", 3/(1/a+1/b+1/c));
        break;
    case 4:
        printf("Media Aritmetica %.2f\n", (a+b+c)/3);
        break;
}
    return 0;
}
