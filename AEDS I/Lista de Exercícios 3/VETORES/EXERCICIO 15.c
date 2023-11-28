#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[5],i,j,aux;
	for(i=0; i<5; i++){
		printf("Digite o %do valor: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<5; i++){
		for(j= i+1; j<5; j++){
			if(vet[i] == vet[j]){
				aux = vet[i];
			}
		}
	}
	return 0;
}