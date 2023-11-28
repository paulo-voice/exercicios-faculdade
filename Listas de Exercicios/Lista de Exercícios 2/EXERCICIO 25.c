#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int i, soma = 0;
    for(i =1; i <= 1000; i+=2)
        soma += i;
    printf("Soma dos impares de 1 a 1000: %d\n\n", soma);
return 0;
}
