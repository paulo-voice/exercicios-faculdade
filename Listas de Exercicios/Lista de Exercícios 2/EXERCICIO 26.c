#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int i, numero, divisores, multiplos[3];
    for (i = 0; i < 3; i++){
        multiplos[i] = 0;
    }
    printf("Numero: ");
    scanf("%d", &numero);
    divisores = 0;
    i = numero;
    while (divisores < 3){
        if (i % 11 == 0 && multiplos[0] == 0){
            multiplos[0] = i;
            divisores++;
        }
        if (i % 13 == 0 && multiplos[1] == 0){
            multiplos[1] = i;
            divisores++;
        }
        if (i % 17 == 0 && multiplos[2] == 0){
            multiplos[2] = i;
            divisores++;
        }
        i++;
    }
    printf("primeiro multiplos (11,13,17): %d, %d, %d", multiplos[0], multiplos[1], multiplos[2]);
    return 0;
}
