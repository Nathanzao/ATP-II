#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que declare um array de 5 inteiros
e use aritmética de ponteiros para somar 10 a cada elemento do array. Imprima
o array resultante.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[5], *ponteiro;
    vetor[0] = 3;
    vetor[1] = 1;
    vetor[2] = 9;
    vetor[3] = 2;
    vetor[4] = 5;
    for (int i = 0; i < 5; i++){
        ponteiro = &vetor[i];
        if (i != '0'){ // por que sem ser !=, só ==, não deu?
            *ponteiro+= 10;
        }else{
        ponteiro += 1;
        *ponteiro += 10;
        }
        printf("O valor da %dª posição do vetor: %d\n", i+1, vetor[i]);
    }

return 0;
}
