#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 37
int horaChegada, horaSaida, minutoChegada, minutoSaida, diferenca;
float preco = 0;
printf("Digite a hora de entrada e saida ->(**:** **:**): ");
scanf("%d:%d %d:%d", &horaChegada, &minutoChegada, &horaSaida, &minutoSaida);
int chegadaMinutos = (horaChegada*60) + minutoChegada, saidaMinutos = (horaSaida*60) + minutoSaida;
diferenca = (horaChegada < horaSaida) ? saidaMinutos - chegadaMinutos : (1440 - chegadaMinutos + saidaMinutos);
if(diferenca <= 60){
    preco = 1.0;
}
else if(diferenca <= 120){
    preco = 2.0;
}
else if(diferenca <= 180){
    preco = 3.40;
}
else if(diferenca <= 240){
    preco = 4.80;
}
else{
    preco = (diferenca % 60 == 0) ? 4.80 + ((diferenca / 60) - 4) * 2.0 : 6.80 + ((diferenca / 60) - 4) * 2.0;
}
    printf("\nO carro ficou estacionado durante %d:%d\n", diferenca / 60, diferenca % 60);
    printf("Preco a pagar R$ %.2f\n", preco);


    return 0;
}
