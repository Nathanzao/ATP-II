#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Declare um array de 7 inteiros e inicialize-o com os valores dos
primeiros 7 números primos. Escreva um programa em C que imprima todos os
elementos do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[7], j = 0;
    vetor[0] = 2;
    vetor[1] = 3;
    vetor[2] = 5;
    vetor[3] = 7;
    vetor[4] = 11;
    vetor[5] = 13;
    vetor[6] = 17;
        while (j != 7){
            printf("Vetor na posição %d, tem o seguinte número primo: %d\n", j, vetor[j]);
            j++;
        }
return 0;
}
