#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                                BÁSICO:

*/

int posicao_elemento(int *vetor, int ultimo, int elemento) {
    int i;

    for (i = 0; i <= ultimo && vetor[i] <= elemento; i++);
    return i;

}

void deslocar_subvetor(int *vetor, int primeiro, int ultimo) {
    int i;
    
    for (i = ultimo; i >= primeiro; i--) {
        vetor[i+1] = vetor[i];
    }
}


int ordenar_insercao(int *vetor, int n) {
    int i, posicao;
    int elemento;

    for (i = 1; i < n; i++) {
        elemento = vetor[i];
        posicao = posicao_elemento(vetor, i-1, elemento);
        deslocar_subvetor(vetor, posicao, i-1);
        vetor[posicao] = elemento;
    }
}



int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[10] = {2,7,3,9,0,3,6,2,9,1};
int tamanho = sizeof(vetor)/sizeof(int);

    for(int i = 0; i < tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n");

    ordenar_insercao(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n");


return 0;
}