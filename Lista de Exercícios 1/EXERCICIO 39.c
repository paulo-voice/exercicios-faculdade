#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void)
{
//EXERCICIO 39
float vs, ns;
int ts;
printf("Digite o salario e o tempo de servico: ");
scanf("%f%d", &vs, &ts);
if(vs < 500.00) 
    ns = vs + (vs * 0.25);
else if(vs < 1000.00) 
    ns = vs + (vs * 0.20);
else if(vs < 1500.00) 
    ns = vs + (vs * 0.15);
else if(vs < 2000.00) 
    ns = vs + (vs * 0.10);
else 
    printf("Sem reajuste\n");
    
if(ts < 1){        
    printf("Sem bonus\n");
    printf("Salario Reajustado: %.2f\n", ns);
}
else if(ts <= 3) 
    printf("Salario Reajustado: %.2f\n", ns += 100);
else if(ts <= 6) 
    printf("Salario Reajustado: %.2f\n", ns += 200);
else if(ts <= 10) 
    printf("Salario Reajustado: %.2f\n", ns += 300);
else 
    printf("Salario reajustado: %.2f\n", ns += 500);

return 0;
}
