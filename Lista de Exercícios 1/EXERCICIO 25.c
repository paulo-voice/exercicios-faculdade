#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 25
int a, b, c, delta;
printf("Digite os valores: ");
scanf("%d%d%d", &a, &b, &c);
if(a != 0){
    delta = (b * b) - (4 * a * c);
    if (delta < 0 ) printf("Nao existe raiz real\n");
    else if(delta == 0){
        printf("Existe uma raiz real\n");
        printf("[+] %.2f\n", (float) (-b) / (2 * a));
}
        else{
            printf("Existem duas raizes reais\n");
            printf("[+] %.2f\n", (float) (-b + sqrt(delta)) / (2 * a));
            printf("[+] %.2f\n", (float) (-b - sqrt(delta)) / (2 * a));
}
}
else
    printf("Estes valores nao formam uma equacao do 2 grau\n");
}
return 0;
}
