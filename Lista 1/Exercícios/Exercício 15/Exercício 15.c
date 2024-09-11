#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que declare um array de 7
inteiros e use um ponteiro para calcular a soma dos elementos do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[7], *ponteiro, soma = 0;
    vetor[0] = 2;
    vetor[1] = 6;
    vetor[2] = 5;
    vetor[3] = 9;
    vetor[4] = 1;
    vetor[5] = 3;
    vetor[6] = 4;
    for (int i = 0; i < 7; i++){
        ponteiro = &vetor[i];
        soma += *ponteiro;

    }
    printf("Soma: %d", soma);
return 0;
}
