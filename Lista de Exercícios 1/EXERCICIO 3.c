#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   //EXERCICIO 3
int x;
printf("Digite um numero real: ");
scanf("%d", &x);
if (x<0){
    x=pow(x,2);
    printf("Numero negativo: %d", x);
}
else{
    x=sqrt(x);
    printf("Numero positivo: %d", x);
}
    return 0;
}
