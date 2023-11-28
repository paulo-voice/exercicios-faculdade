#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 12
int x;
printf("Digite seu valor: ");
scanf("%d", &x);
if(x<0){
    printf("Numero invalido");
}
else{
    log(x);
    printf("%d", x);
}
    return 0;
}
