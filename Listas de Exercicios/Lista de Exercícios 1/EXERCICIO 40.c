#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 40
float cf;
printf("Digite o preco de fabrica: ");
scanf("%f", &cf);
if(cf <= 12000)
    printf("Custo ao consumidor: %.2f\n", cf + (cf * 0.05));
else if(cf < 25000)
    printf("Custo ao consumidor: %.2f\n", cf + (cf * 0.10) + (cf * 0.15));
else
    printf("Custo ao consumidor: %.2f\n", cf + (cf * 0.15) + (cf * 0.20));
    return 0;
}
