#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que verifique se todos os ele-
mentos de um array de 5 inteiros s�o positivos.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[5], confirma = 0;
    for (int i = 0; i < 5; i++){
        printf("Digite o valor da %d� posi��o: ", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0){
            confirma++;
        }
    }
    printf("A quantidade de n�meros negativos �: %d", confirma);

return 0;
}
