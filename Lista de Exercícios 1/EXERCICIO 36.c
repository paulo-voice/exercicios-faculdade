#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 36
float valor;
printf("Digite o valor de sua venda:\n ");
scanf("%f", &valor);
if(valor >= 100.000){
    printf("Comissao -> %.2f\n", 700+(valor*0.16));
}
else if(valor>=80.000){
    printf("Comissao -> %.2f\n", 650+(valor*0.14));
}
else if(valor>=60.000){
    printf("Comissao %.2f\n", 600+(valor*0.14));
}
else if(valor>=40.000){
    printf("Comissao %.2f\n", 550+(valor * 0.14));
}
else if(valor>=20.000){
    printf("Comissao %.2f\n", 500+(valor * 0.14));
}
else{
    printf("Comissao %.2f\n", 400+(valor * 0.14));
}
    return 0;
}
