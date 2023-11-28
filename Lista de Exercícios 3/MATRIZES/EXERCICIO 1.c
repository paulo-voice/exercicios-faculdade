#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int matriz[4][4];
    int cont=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>10){
                cont++;
            }
        }
    }
    printf("A matriz tem %d valores maiores que 10.",cont);
    return 0;
}