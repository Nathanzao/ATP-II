#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que declare um array de 5
inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores
dos elementos do array. Imprima o array resultante.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[5], *ponteiro;
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 5;
    vetor[3] = 9;
    vetor[4] = 4;
                    // veja que se não fosse mais de 2 endereco para alterar, ou seja, um vetor, eu poderia colocar a linha 22 aqui fora e sem ser no for.
    for (int i = 0; i < 5; i++){
        ponteiro = &vetor[i]; // o ponteiro aponta para o endereço de vetor[i]. Qualquer coisa que eu alterar no conteúdo de *ponteiro irá alterar o vetor
        *ponteiro = i + 14;
        printf("Conteúdo das posições dos elementos alterados do ponteiro: %d\n", vetor[i]);
    }

return 0;
}
