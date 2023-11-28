#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
    char nome[30];
    int matricula;
    float notas[3];
    float media;
}Aluno;
void ordena(Aluno A[],int num);
Aluno buscaSequencialint(int buscar, Aluno A[], int num);
int buscaBinariaint(int buscar, Aluno A[], int num);
void imprime(int num, Aluno A[]);

int main(){
    int num, i;
    printf("Digite o numero de elementos:\n");
    scanf("%d",&num);
    struct Aluno *A=(struct Aluno*) malloc(num*sizeof(Aluno));
    if(A==NULL){
        printf("Erro ao alocar memoria!\n");
    }
    else{
        printf("Memoria alocada!\n");
    }
    printf("Preencha os dados dos alunos: \n");
    setbuf(stdin,NULL);
    for(i=0;i<num;i++){
        printf("Nome:\n");
        scanf("%s",A[i].nome);
        printf("Matricula:\n");
        scanf("%d",&A[i].matricula);
        printf("3 Notas:\n");
        for(int j=0;j<3;j++){
            scanf("%f",&A[i].notas[j]);
        }
        A[i].media=(A[i].notas[0]+A[i].notas[1]+A[i].notas[2])/3.0;
    }
    int entrada;
    do{
        printf("\nMENU\n1-BUSCA SEQUENCIAL\n2-BUSCA BINARIA\n3-TODOS ELEMENTOS\n4-ORDENAR\n");
        scanf("%d",&entrada);
        switch(entrada){
            case 1:{
                printf("Busca sequencial de um determinado valor no vetor: \n");
                int buscar;
                Aluno B;
                scanf("%d",&buscar);
                B=buscaSequencialint(buscar, A, num);
                if(B.matricula!=1){
                    printf("Nome: %s\n",B.nome);
                    printf("Matricula: %d\n",B.matricula);
                    printf("Notas: %0.2f, %0.2f, %0.2f\n",B.notas[0],B.notas[1],B.notas[2]);
                    printf("Media: %0.2f",B.media);
                }
                else{
                    printf("Numero nao encontrado");
                }
                break;
            }
            case 2:{
                printf("Busca binaria de um determinado valor no vetor: \n");
                int buscar;
                scanf("%d",&buscar);
                buscaBinariaint(buscar,A,num);
                if(buscaBinariaint!=1){
                    printf("Busca efetuada com sucesso!");
                }
                break;
            }
            case 3:{
                printf("Ordenando os vetores\n");
                ordena(A,num);
                break;
            }
            case 4:{
                printf("Imprimindo todos os elementos de um aluno: \n");
                imprime(num, A);
                break;
            }
        }
    }while(entrada!=0&&entrada<5);
    return 0;
}
Aluno buscaSequencialint(int buscar, Aluno A[], int num){
    Aluno B;
    int C;
    for(int i=0;i<num;i++){
        if(buscar==A[i].matricula){
            B=A[i];
            return B;
        }
    C=-1;
    }
}
int buscaBinariaint(int buscar, Aluno A[], int num){
    int i;
    int esq=0;
    int dir=num-1;
    do{
        i=(esq+dir)/2;
        if(buscar>A[i].matricula){
            esq = i+1;
        } else{
            dir=i-1;
        }
    }while(buscar!=A[i].matricula&&esq<=dir);
    if(buscar==A[i].matricula){
        return i;
    }else{
        return -1;
    }
}
void imprime(int num, Aluno A[]){
    int i,j;
    for(i=0;i<num;i++){
        printf("Nome: %s\n",A[i].nome);
        printf("Matricula:%d\n",A[i].matricula);
        for(int j=0;j<3;j++){
            printf("Notas: %0.2f",A[i].notas[j]);
        }
        printf("Media: %0.2f\n",A[i].media);
    }
}
void ordena(Aluno A[],int num){
    int i,j,*aux;
    for(j=num-1;j>0;j--){
        for(i=0;i<j;i++){
            if(A[i+1].matricula<A[i].matricula){
                aux=A[i];
                A[i]=A[i+1];
                A[i+1]=aux;
            }
        }
    }
}