#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 38
int d, m, a;
printf("Digite a data de nascimento ->(dd/mm/aaaa):\n");
scanf("%d/%d/%d", &d, &m, &a);
if((d > 31 || d <= 0) || (m > 12 || m <= 0) || (a > 2022))
    printf("Data Invalida\n");
else if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
    printf("Data Invalida\n");
else if((a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) && (m == 2 && d <= 29))
    printf("Data Valida\n");
else if(m == 2 && d > 28)
    printf("Data Invalida\n");
else
    printf("Data Valida\n");
    return 0;
}
