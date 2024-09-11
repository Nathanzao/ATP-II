#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que preencha um array de 20 inteiros
com números aleatórios entre 1 e 100. Em seguida, imprima todos os elementos
do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
srand(time(0));
int vetor[20];
    for (int i = 0; i < 20; i++){
        vetor[i] = rand() % 100; /* usamos o resto da divisão porque se algum numero der até resto 99, vai sobrar 99 mesmo.
        se der 100, vai dar 1, e ser der +100, então a divisão vai ocorrer de novo (nosso divisor é 100) e o resto será diferente! */
        printf("%dª posição do vetor: %d\n", i+1, vetor[i]);
    }

return 0;
}
