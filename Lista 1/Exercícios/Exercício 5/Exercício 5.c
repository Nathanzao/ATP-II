#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que leia 5 valores inteiros, armazene-
os em um array e depois imprima os valores na ordem inversa.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[5], i = 0;
    for (i = 0; i < 5; i++){
        printf("Digite o valor da %d posicao do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 5; i++){
        printf("Vetor na posicao %d recebeu: %d\n", i+1, vetor[4-i]);
    }

return 0;
}
