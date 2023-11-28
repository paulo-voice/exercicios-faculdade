#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[10];
    int x = 7, achei=0, posicao;
    for (int i=0;i<10;i++){
        if (vet[i] == x){
            achei += 1;
            posicao = i;
        }
    }
        if (achei == 0){
    printf("Numero nao encontrado");
    return 0;
        }
    else{
    printf("Numero encontrado na posicao %d %d vezes",posicao,vezes);
}
    return 0;
}