#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Declare um array de 5 caracteres e inicialize-o com as letras
’a’, ’b’, ’c’, ’d’ e ’e’. Imprima os elementos do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char vetor[5];
int i = 0;
    vetor[0] = 'a';
    vetor[1] = 'b';
    vetor[2] = 'c';
    vetor[3] = 'd';
    vetor[4] = 'e';

    while (i != 5){
        printf("Vetor %d contendo: %c dentro!\n", i, vetor[i]);
        i++;
    }
return 0;
}
