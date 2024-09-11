#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Declare um array de 8 n�meros de ponto flutuante e inicialize-
o com os valores dos primeiros 8 n�meros da sequ�ncia de Fibonacci. Imprima todos os elementos do array.
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
        printf("Vetor na posi��o %d, contendo o seguinte n�mero da sequ�ncia de Fibonnaci: %.0f\n", i, vetor[i]);
        i++;
    }

return 0;
}
