#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define LEN 4

int main(){
    int num = 0, i, j, matriz[5][5];
    printf("Digite a matriz: \n");
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            printf("\nLinha: %d Coluna: %d -> ", i+1, j+1);
            scanf("%d", &matriz[i][j]);  
 }
}  
    printf("Pesquise um numero: \n");
    scanf("%d", &num);
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            if(matriz[i][j] == num){
                printf("\nNumero encontrado na linha: %d e Coluna: %d\n", i+1, j+1);
  }
 }
}
    return 0;
}