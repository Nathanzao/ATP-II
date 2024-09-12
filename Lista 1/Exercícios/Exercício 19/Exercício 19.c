#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que declare um array de 8
n�meros de ponto flutuante e use aritm�tica de ponteiros para calcular a m�dia
dos valores.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
float vetor[8], soma, *ponteiro;
    vetor[0] = 2;
    vetor[1] = 1;
    vetor[2] = 5;
    vetor[3] = 7;
    vetor[4] = 4;
    vetor[5] = 3;
    vetor[6] = 1;
    vetor[7] = 9;
    for (int i = 0; i < 8; i++){
        ponteiro = &vetor[i];
        if (i != 0){ 
            ponteiro += 1;
            soma += *ponteiro;
        }else{
            soma += *ponteiro;
        }
    }
    printf("Soma dos valores � %.0f, e a m�dia: %.0f", soma, soma/8);

return 0;
}
