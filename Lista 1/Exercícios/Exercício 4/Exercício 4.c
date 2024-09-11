#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Declare um array de 8 números de ponto flutuante e inicialize-
o com os valores dos primeiros 8 números da sequência de Fibonacci. Imprima todos os elementos do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
float vetor[8];
int i = 0;
    vetor[0] = 1;
    vetor[1] = 1;
    for (int j = 2; j <= 8; j++){
        vetor[j] = vetor[j-1] + vetor[j-2];
    }
    while (i != 8){
        printf("Vetor na posição %d, contendo o seguinte número da sequência de Fibonnaci: %.0f\n", i, vetor[i]);
        i++;
    }

return 0;
}
