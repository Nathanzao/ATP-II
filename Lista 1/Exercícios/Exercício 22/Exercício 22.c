#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que conte o número de elementos
pares e ímpares em um array de 20 inteiros.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[20], pares= 0, impares = 0;
    for (int i = 0; i < 20; i++){
        printf("Digite o valor da %dª posição do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        fflush(stdin);
        if (vetor[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
    printf("Números de pares: %d\n", pares);
    printf("Números de ímpares: %d", impares);

return 0;
}
