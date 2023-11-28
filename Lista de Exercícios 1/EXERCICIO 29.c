#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#define MAX_RAND 100

int main(void)
{
//EXERCICIO 29
int x,y,r,s = 0;
srand((unsigned) time(NULL));
x = rand() % MAX_RAND, y = rand() % MAX_RAND;
printf("Quanto é %d + %d? -> ", x, y);
scanf("%d", &r);
if(r == x+y){
    printf("Certo!\n");
    s++;
}
else{
    printf("Errado!\n");
}
x = rand() % MAX_RAND, y = rand() % MAX_RAND;
printf("Quanto é %d + %d? -> ", x, y);
scanf("%d", &r);
if(r == x+y){
    printf("Certo!\n");
    s++;
}
else{
    printf("Errado!\n");
}
x = rand() % MAX_RAND, y = rand() % MAX_RAND;
printf("Quanto é %d + %d? -> ", x, y);
scanf("%d", &r);
if(r == x+y){
    printf("Certo!\n");
    s++;
}
else{
    printf("Errado!\n");
}
x = rand() % MAX_RAND, y = rand() % MAX_RAND;
printf("Quanto é %d + %d? -> ", x, y);
scanf("%d", &r);
if(r == x+y){
    printf("Certo!\n");
    s++;
}
else{
    printf("Errado!\n");
}
x = rand() % MAX_RAND, y = rand() % MAX_RAND;
printf("Quanto é %d + %d? -> ", x, y);
scanf("%d", &r);
if(r == x+y){
    printf("Certo!\n");
    s++;
}
else{
    printf("Errado!\n");
}
    printf("Você acertou %d questoes!\n", s);
return 0;
}
