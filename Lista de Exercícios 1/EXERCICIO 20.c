#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 20
int a, b, c;
printf("Digite os tres valores:\n");
scanf("%d %d %d", &a, &b, &c);
if(a + b > c && a + c > b && b + c > a){
    printf("Os 3 lados formam um triangulo!\n");
    if(a == b && a == c)
        printf("Equilatero");
    else
        if(a != b || a == c || b == c)
            printf("Isosceles");
        else
            printf("Escaleno");
}
else{
    printf("Os 3 lados nao formam um triangulo!\n");
}
    return 0;
}
