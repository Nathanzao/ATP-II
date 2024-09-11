#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Declare um array de 10 inteiros e inicialize-o com valores de 0 a
9. Escreva um programa em C que imprima todos os elementos do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[10], i = 0;
    while (vetor[i] != '\0'){
        vetor[i] = i;
        printf("Vetor de %d posições, com o elemento em %d: %d\n", 10, i, i);
        i++;
    }
return 0;
}
