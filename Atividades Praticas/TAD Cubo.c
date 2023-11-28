#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct cubo{
    int lado;
}cubo;

int tamanho(cubo C){
    return C.lado;
}
int areatotal(cubo C){
    int area;
    area=6*(pow(C.lado,2));
    return area;
}
int volume(cubo C){
    int vol;
    vol=pow(C.lado,3);
    return vol;
}
int main(){
    cubo C;
    printf("Digite o tamanho do lado:\n");
    scanf("%d",&C.lado);
    printf("O tamanho do lado do cubo eh: %d\n",tamanho(C));
    printf("A area total do cubo eh: %d\n",areatotal(C));
    printf("O volume do cubo eh: %d\n",volume(C));
    return 0;
}
