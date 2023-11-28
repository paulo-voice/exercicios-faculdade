#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   //EXERCICIO 2
int x;
printf("Digite um numero positivo ou negativo: ");
scanf("%d", &x);
if (x<0){
    printf("Seu número eh negativo");
}
else{
    x=sqrt(x);
    printf("%d", x);
}
    return 0;
}
