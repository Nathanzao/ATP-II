#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que conte o n�mero de elementos
pares e �mpares em um array de 20 inteiros.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[20], pares= 0, impares = 0;
    for (int i = 0; i < 20; i++){
        printf("Digite o valor da %d� posi��o do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        fflush(stdin);
        if (vetor[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
    printf("N�meros de pares: %d\n", pares);
    printf("N�meros de �mpares: %d", impares);

return 0;
}
