#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct esfera{
    int raio;
}esfera;
float areaS(esfera C){
    float areasuperficie;
    areasuperficie=4*(pow(C.raio,2));
    return areasuperficie;
}
float volume(esfera C){
    float vol;
    vol=4/3*(pow(C.raio,3));
    return vol;
}
int main(){
    esfera C;
    printf("Digite o raio da esfera:\n");
    scanf("%d",&C.raio);
    printf("A area da superficie eh: %0.2fπcm²\n",areaS(C));
    printf("O volume da esfera eh: %0.2fπ",volume(C));
    return 0;
}
