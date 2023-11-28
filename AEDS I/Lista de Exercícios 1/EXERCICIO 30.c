#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 30
int x, y, z;
printf("Digite 3 numeros: ");
scanf("%d%d%d", &x, &y, &z);
    if(x < y && x < z)(z < y) ?
    printf("%d %d %d\n", x, z, y):
    printf("%d %d %d\n", x, y, z);
else if(y < x && y < z)(x < z) ?
    printf("%d %d %d\n", y, x, z):
    printf("%d %d %d\n", y, z, x);
else(y < x) ?
    printf("%d %d %d\n", z, y, x):
    printf("%d %d %d\n", z, x, y);
}
return 0;
}
