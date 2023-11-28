#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 17
int area,base1,base2,altura;
printf("Escreva a base maior: ");
scanf("%d", &base1);
printf("Escreva a base menor: ");
scanf("%d", &base2);
printf("Escreva a altura: ");
scanf("%d", &altura);
area=(base1+base2)*altura/2;
if(base1<0 && base2<0){
    return 0;
}
printf("A area do seu trapezio eh: %d", area);
    return 0;
}
