#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n,soma;
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    soma = (n * (n + 1)) / 2;
    printf("A soma dos %d primeiros inteiros positivos e' %d\n", n, soma);
  return 0;
}
