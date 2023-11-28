#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    float x[5], y[5], prod_esc=0;
    int m, i;
    printf("Informe a quantidade de numeros para cada vetor: ");
    scanf("%d", &m);
    while ((m < 1) || (m > 5)) {
        printf("Valor de quantidade de vetores errada, permite apenas 5, retorne e insiravalor de quantidade ate 5 ");
        scanf("%d", &m);
    }
        for (i=0; i<m; i++) {
            printf("Informe x[%d]: ", i);
            scanf("%f", &x[i]);
        }
            for (i=0; i<m; i++) {
                printf("Informe y[%d]: ", i);
                scanf("%f", &y[i]);
                
            }
                for (i=0; i<m; i++)
                prod_esc += x[i] * y[i];
                printf("O produto escalar eh: %f\n", prod_esc);
    return 0;
}