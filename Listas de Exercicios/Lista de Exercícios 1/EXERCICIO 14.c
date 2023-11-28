#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 14
float n1, n2, n3;
float min=0,max=10,ap=2.9,rec=4.9;
printf("Digite suas 3 notas:\n ");
scanf("%f %f %f", &n1, &n2, &n3);
if((n1 > min && n1 <= max) && (n2 <= max && n2 > min) && (n3 <= max && n3 > min))
{
    double media = n1*2+n2*3+n3*5/10;
    if(media <= ap) printf("Reprovado\n");
    else if(media <= rec) printf("Recuperacao\n");
    else printf("Aprovado\n");
}
    else printf("As notas devem ser entre 0 e 10\n");
    return 0;
}
