#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que leia 10 valores inteiros e
calcule a soma de todos os elementos do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[10], soma = 0;
    for (int i = 0; i < 10; i++){
        printf("Digite o valor da %dª posição do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        fflush(stdin); // o que estava dando errado nesse código era a falta do fflush, de limpar o buffer.
    }
    for (int i = 0; i < 10; i++){
        soma += vetor[i];
    }
    printf("A soma dos valores do vetor é: %d", soma);

return 0;
}
