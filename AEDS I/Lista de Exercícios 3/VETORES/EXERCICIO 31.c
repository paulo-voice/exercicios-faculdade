#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vetorA[10];
    int vetorB[10];
    int vetorAB[20];
    int ate = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite um valor para o vetorA[%d]:", i);
        scanf("%d",&vetorA[i]);
    }
    printf("\n");
    for(int j = 0; j < 10; j++){
        printf("Digite um valor para o vetorA[%d]:", j);
        scanf("%d",&vetorB[j]);
    }
    printf("\n");

    for(int k = 0; k < 10; k++){
        vetorAB[k] = vetorA[k];
    }

    for(int v = 0; v < 10; v++){
        int achou = 0;
        for(int z = 0; z < 10; z++){
            if(vetorB[v] == vetorA[z]){
                achou = 1;
                break;
            }
        }
        if(achou == 0){
            vetorAB[v+10] = vetorB[v];
            ate = ate + 1;
        }
    }
    for(int u = 0; u < 10 + ate; u++){
        printf("%d ", vetorAB[u]);
    }
    return 0;
}