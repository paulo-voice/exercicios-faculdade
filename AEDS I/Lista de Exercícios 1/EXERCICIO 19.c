#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 19
int numero;
printf("Digite seu numero: ");
scanf("%d", &numero);
if(numero%3==0&&numero%5==0){
    printf("O numero eh divisivel por ambos 5 e 3");
}
else{
    printf("O numero eh divisivel por um dos dois");
}
    return 0;
}
