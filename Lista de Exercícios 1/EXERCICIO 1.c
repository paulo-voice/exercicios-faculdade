#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   //EXERCICIO 1
int x,y;
printf("Digite o primeiro valor: ");
scanf("%d", &x);
printf("Digite o segundo valor: ");
scanf("%d", &y);
if (x>y){
    printf("Seu primeiro valor eh maior do que o segundo!");
}
else{
    printf("Seu segundo valor eh maior do que o primeiro!");
}
    return 0;
}
