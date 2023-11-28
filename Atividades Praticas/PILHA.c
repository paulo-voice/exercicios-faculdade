//                                  parte da pilha

#define MAXTAM    100
#define bool      short
#define true      1
#define false     0

Serie array[MAXTAM+1];   // Elementos da pilha 
int primeiro;          // Remove do indice "primeiro".
int ultimo;             // Insere no indice "ultimo".


/
 * Inicializacoes
 */
void start(){
   primeiro = ultimo = 0;
}


/
 * Insere um elemento na ultima posicao da 
 * @param x int elemento a ser inserido.
 * @Se a fila estiver cheia.
 */
void inserir(Serie x) {

   array[ultimo] = x;
   ultimo = (ultimo + 1);
}


/
 * Remove um elemento da primeira posicao da fila e movimenta 
 * os demais elementos para o primeiro da mesma.
 * @return resp int elemento a ser removido.
 * @Se a fila estiver vazia.
 */
Serie remover() {

   //validar remocao
   if (primeiro == ultimo) {
      printf("Erro ao remover!");
      exit(1);
   }

   Serie resp = array[ultimo - 1];
   ultimo = ultimo - 1;
   return resp;
}


/
 * Mostra os array separados.
 */
void mostrar (){
    int i;

    for(i = ultimo - 1; i >= primeiro; i--) {
        print_serie(&array[i]);
    }

}


/**
 * Retorna um bool indicando se a fila esta vazia
 * @return bool indicando se a fila esta vazia
 */
bool isVazia() {
   return (primeiro == ultimo); 
}


//                                  fim da parte da pilha