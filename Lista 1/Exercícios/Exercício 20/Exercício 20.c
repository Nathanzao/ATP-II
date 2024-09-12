#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que declare um array de 12
caracteres e use aritm�tica de ponteiros para inverter a ordem dos caracteres no
array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char vetor[12], variavel_auxiliar;
    for(int i = 0; i < 12; i++){ // preenchendo o vetor.
        printf("Digite o valor do vetor na %d� posi��o: ", i+1);
        gets(vetor + i);
    }
    for(int i = 0; i < 12/2; i++){ // invertendo a ordem.
        variavel_auxiliar = *(vetor + i);
        *(vetor + i) = *(vetor +11 -i);
        *(vetor +11 -i) = variavel_auxiliar;
    }
    for(int i = 0; i < 12; i++){
        printf("\nValor na %d� posi��o: %c", i+1, *(vetor + i));
    }

return 0;
}
