#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n_1, n_2, soma_par, prod_impar, maior, menor, i;
    soma_par = 0;
    prod_impar = 1;
    printf("Digite os numeros: \n");
    scanf ("%d %d", &n_1, &n_2);
    if (n_1 >= n_2){
        maior = n_1;
        menor = n_2;
    }
    else{
        maior = n_2;
        menor = n_1;
    }
    for (i = menor; i < maior + 1; i++){
        if (i % 2 == 0){
            soma_par += i;
}
        else{
            prod_impar *= i;
}
   }
    printf ("Soma dos pares: %d \nProduto dos impares: %d\n", soma_par,prod_impar);
 return 0;
}
