#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 26
float km;
int gas, consumo;
printf("Digite a distancia em KM: \n");
scanf("%f", &km);
printf("Digite a quantidade de gasolina em litros consumida: \n");
scanf("%d", &gas);
consumo=km/gas;
if(consumo<8){
    printf("Venda o carro!\n");
}
else if(consumo<=14){
    printf("Economico!");
}
else{
    printf("Super economico!");
}
    return 0;
}
