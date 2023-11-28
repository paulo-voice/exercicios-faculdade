#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 41
float p, a;
printf("Digite o peso(kg) e a altura(m): ");
scanf("%f%f", &p, &a);
float imc = p / (a * a);
if(imc < 18.5)
    printf("IMC: %.1f\nAbaixo do Peso\n", imc);
else if(imc < 24.9)
    printf("IMC: %.1f\nSaudavel\n", imc);
else if(imc < 29.9)
    printf("IMC: %.1f\nPeso em excesso\n", imc);
else if(imc < 34.9)
    printf("IMC: %.1f\nObesidade Grau I\n", imc);
else if(imc < 39.9)
    printf("IMC: %.1f\nObesidade Grau II(severa)\n", imc);
else
    printf("IMC: %.1f\nObesidade Grau III(morbida)\n", imc);
    return 0;
}
