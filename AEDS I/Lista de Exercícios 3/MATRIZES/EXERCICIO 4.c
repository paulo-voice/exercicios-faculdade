#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define LEN 4

int main(){
    int matriz[4][4];
    int i, j, maior=matriz[0][0];
    for (i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite a matriz[%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
            if (maior < matriz[i][j])
            maior = matriz[i][j];
}
}
    printf("Matriz de maior valor: %d", maior);
    return 0;
}