#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                                    BÁSICO:
Selection-Short compara todos os valores de um vetor e coloca o menor na primeira posição. Vai repetindo isso,
aumentando o valor da posição inicial.
Veja que, na parte da troca, precisamos necessariamente usar ponteiros. Se não, não irá alterar o conteúdo do vetor.
*/


void troca(int *menor, int *i){
    int auxiliar = 0;

    auxiliar = *menor;
    *menor = *i;
    *i = auxiliar;
}

int menor(int *vetor, int tamanho, int primeiro){
    int menorr = primeiro;
    
    for(int i = primeiro + 1; i < tamanho; i++){
        if(vetor[menorr] > vetor[i]){
            menorr = i;
        }
    }

    return menorr;
}

void ordenar_selecao(int *vetor, int tamanho){
    int menorrr = 0, i = 0;

    for(i = 0; i < tamanho; i++){
        menorrr = menor(vetor, tamanho, i);
        troca(&vetor[menorrr], &vetor[i]);
    }
}

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[10] = {1,5,4,8,3,7,2,1,5,9};
int tamanho = sizeof(vetor)/sizeof(int);/* Uma das formas de descobrir o tamanho de um vetor. */


    for(int i = 0; i <  tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n");

    ordenar_selecao(vetor, tamanho);

    for(int i = 0; i <  tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n");



return 0;
}