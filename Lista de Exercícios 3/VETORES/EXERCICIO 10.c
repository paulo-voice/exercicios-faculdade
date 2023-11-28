#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int nota[15],i,media=0;
    for(i=0;i<15;i++){
        printf("Digite a nota do %d aluno: \n",(i+1));
        scanf("%d",&nota[i]);
        media=media+nota[i];
    }
    media=media/15;
    printf("A media geral dos alunos foi: %d",media);
    return 0;
}