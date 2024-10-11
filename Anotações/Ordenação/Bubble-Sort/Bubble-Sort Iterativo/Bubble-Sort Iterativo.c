#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                                    BÁSICO:
Bem intuitivo. Vamos passar por cada elemento, jogando o maior sempre para o lado final. Fazendo isso a quantidade de vezes do número de elementos do vetor,
conseguimos ordenar ele inteiro.
*/

void bubble_sort(int *vetor, int tamanho){
    int variavel_auxiliar = 0;
    int troca = 1;
    
    while(troca != 0){
        troca = 0;
        for(int i = 0; i < tamanho - 1; i++){
            if(vetor[i] > vetor[i+1]){
                variavel_auxiliar = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = variavel_auxiliar;
                troca = 1;
            }
        }
        tamanho--;
    }
}

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[5] = {4,2,7,4,1};

    for(int i = 0; i < 5; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n");

    bubble_sort(vetor, 5);

    for(int i = 0; i < 5; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n");


return 0;
}