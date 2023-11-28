#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[5]={1,5,6,2,8},code;
    printf("Digite 1 para ordem direta, 2 para ordem inversa: \n");
    scanf("%d",&code);
    if(code==0){
    }
    else if(code==1){
        for(int i=0;i<5;i++){
            printf("Vetores:%d\n",vet[i]);
        }
    }
    else if(code==2){
        for(int i=4;i!=-1;i--){
            printf("Vetores:%d\n",vet[i]);
        }
    }
    else if(code!=1&&code!=2){
        printf("Codigo invalido!");
    }
	return 0;
}