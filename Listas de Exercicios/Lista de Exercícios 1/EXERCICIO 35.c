#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void)
{
//EXERCICIO 35
int d, m, a;
printf("Digite uma data(dd/mm/aaaa): ");
scanf("%d/%d/%d", &d, &m, &a);
if((a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))){
    if((d > 31) && (m > 12)) 
    printf("Data Invalida\n");
    else if((m == 4 || m == 6 || m == 9 || m == 11) && (d < 0 || d > 30)) 
    printf("Data Invalida\n");
    else (m == 2 && d > 29) ? 
    printf("Data Invalida\n") : 
    printf("Data Valida\n");
}
else{
    if((d > 31) && (m > 12)) 
    printf("Data Invalida\n");
    else if((m == 4 || m == 6 || m == 9 || m == 11) && (d < 0 || d > 30)) 
    printf("Data Invalida\n");
    else (m == 2 && d > 28) ? printf("Data Invalida\n") : 
    printf("Data Valida\n");
}

return 0;
}
