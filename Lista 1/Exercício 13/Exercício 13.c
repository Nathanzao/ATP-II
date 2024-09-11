#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que declare um array de 5 inteiros.
Use um ponteiro para acessar e imprimir todos os elementos do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[5], *ponteiro;
    vetor[0] = 1;
    vetor[1] = 3;
    vetor[2] = 2;
    vetor[3] = 4; // quando coloquei 14 deu "E". Por quê?
    vetor[4] = 6;
    for (int i = 0; i < 5; i++){
        ponteiro = &vetor[i];
        printf("Conteúdo da variável apontada pelo ponteiro: %p\n", *ponteiro);
    }

return 0;
}
