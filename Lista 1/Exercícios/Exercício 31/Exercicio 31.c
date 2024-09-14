#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 5

/*
Escreva um programa em C que use um array de ponteiros
para armazenar 5 números inteiros e encontre o maior valor entre eles.

*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    int *vetor, maior = 0, variavel_auxiliar = 0, indice_maior = 0;

    vetor = malloc(TAM * sizeof(int));
    for(int i = 0; i < TAM; i++){
        printf("Digite o valor da %dª posição do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for(int i = 0; i < TAM; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
            indice_maior = i;
        }
    }

    printf("O maior é: %d, na posição %d.\n\n", maior, indice_maior);



    for(int i = 0; i < 5; i++){
        free(vetor[i]);
    }
    free(vetor);

    return 0;
}
