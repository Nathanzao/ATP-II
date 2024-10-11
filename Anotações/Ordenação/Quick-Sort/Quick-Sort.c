#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                                BÁSICO:
Defina um pivô. Percorra o vetor da direita para esquerda vendo se tem  algum elemento maior que o pivô. Percorra o vetor da direita para esquerda vendo se tem algum
elemento menor do que o pivô. Troque o elemento maior da esquerda com o menor da direita. Repita até os indíces se encontrarem.
Perceba que fazendo isso vamos ficar com a metade esquerda menor que o pivô e de forma ordenada, assim como a metade da direita maior que o pivô de forma ordenada.
*/

void troca(int *ini, int *fim){
    int auxiliar = 0;

    auxiliar = *ini;
    *ini = *fim;
    *fim = auxiliar;
}


int particionar(int *vetor, int ini, int fim) {
    int pivo;


    pivo = vetor[fim];
    
    while (ini < fim) {
        
        while (ini < fim && vetor[ini] <= pivo)
        ini++;

        while (ini < fim && vetor[fim] > pivo)
        fim--;

        troca(&vetor[ini], &vetor[fim]);
    }

    return ini; // ini é a posição do primeiro elemento grande
}


void quick_sort(int *vetor, int ini, int fim) {
    int pos;

    if (ini < fim){
        pos = particionar(vetor, ini, fim);
        quick_sort(vetor, ini, pos - 1);
        quick_sort(vetor, pos, fim);
    }
}


int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[7] = {5,2,8,4,7,3,6}, tamanho = sizeof(vetor)/sizeof(int);

    for(int i = 0; i < tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n\n");


    quick_sort(vetor, 0, 6);


    for(int i = 0; i < tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n\n");



return 0;
}