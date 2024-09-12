#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que declare um array de 10
caracteres e use um ponteiro para contar quantos desses caracteres sÃo letras
maiÚsculas.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char vetor[10], *ponteiro;
int quantidade_de_maiusculas = 0;
    vetor[0] = 'm';
    vetor[1] = 'k';
    vetor[2] = 'h';
    vetor[3] = 'e';
    vetor[4] = 'C';
    vetor[5] = 'e';
    vetor[6] = 'g';
    vetor[7] = 'e';
    vetor[8] = 'A';
    vetor[9] = 'a';
    for (int i = 0; i < 10; i++){
        ponteiro = &vetor[i];
        if (*ponteiro >= 65 && *ponteiro <= 90){
            quantidade_de_maiusculas++;
        }
        }
    printf("Quantidade de letras maiúsculas no vetor: %d", quantidade_de_maiusculas);

return 0;
}
