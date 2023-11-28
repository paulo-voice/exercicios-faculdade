#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int notas,qnt=0;
    float media=0;
    printf("Digite sua nota: \n");
    scanf("%d",&notas);
    media=notas+media;
    qnt++;
    while(notas>=10&&notas<=20){
        printf("Digite sua nota: \n");
        scanf("%d",&notas);
        qnt++;
        media=notas+media;
        media=media/qnt;
    }
    printf("A media eh %0.2f",media);
return 0;
}
