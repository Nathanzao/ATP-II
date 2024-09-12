#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que declare um array de 10
inteiros e use aritmética de ponteiros para calcular a soma de todos os elementos
do array. Imprima a soma.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[10], *ponteiro, soma = 0, j = 0;
    vetor[0] = 2;
    vetor[1] = 3;
    vetor[2] = 6;
    vetor[3] = 7;
    vetor[4] = 2;
    vetor[5] = 1;
    vetor[6] = 4;
    vetor[7] = 3;
    vetor[8] = 9;
    vetor[9] = 5;
    while (j != 10){
        ponteiro = &vetor[0];
        ponteiro += j;
        soma += *ponteiro;
        j++;
    }

    printf("Soma é: %d", soma);

return 0;
}
