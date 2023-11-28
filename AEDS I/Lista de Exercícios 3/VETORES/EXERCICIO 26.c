#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    float m, media, sigma, p;
    int vetor[10];
    media = 0;
    m = 0;
    sigma = 0;
    p = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 10; i++){
        m = m + vetor[i];
    }
    media = m / 10.0;
    for(int i = 0; i < 10; i++){
        p = p + (vetor[i] - media);
    }
    sigma = sqrt((p * 1)/10);
    printf("Resultado d = %.2f\n", sigma);
}
    return 0;
}