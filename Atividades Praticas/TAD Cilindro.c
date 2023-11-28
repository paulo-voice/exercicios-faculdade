#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct cilindro{
    int altura;
    int base;
}cilindro;

void tamanho(cilindro C){
    printf("Retornando a base: %d\n",C.base);
    printf("Retornando a altura: %d\n",C.altura);
}
int arealateral(cilindro C){
    int areal;
    areal=2*3.14*C.base*C.altura;
    return areal;
}
int areatotal(cilindro C){
    int area;
    area=2*(3.14*pow(C.base,2))+2*3.14*C.base*C.altura;
    return area;
}
int volume(cilindro C){
    int vol;
    vol=(3.14*(pow(C.base,2)))*C.altura;
    return vol;
}
int main(){
    cilindro C;
    printf("Digite o tamanho do raio da base:\n");
    scanf("%d",&C.base);
    printf("Digite a altura do cilindro:\n");
    scanf("%d",&C.altura);
    tamanho(C);
    printf("A area lateral eh: %d\n",arealateral(C));
    printf("A area total eh: %d\n",areatotal(C));
    printf("O volume eh: %d\n",volume(C));
    
    return 0;
}
