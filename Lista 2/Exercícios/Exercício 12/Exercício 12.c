#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que calcule a média dos elementos de
uma matriz 2x4.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[2][4];
float soma = 0;

    for(int i = 0; i < 2; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 4; j++){
            printf("Digite o valor do elemento da matriz da %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz: \n");
    for (int i = 0; i < 2; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 4; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < 2; i++){ // calculando a soma.
        for (int j = 0; j < 4; j++){
            soma += matriz[i][j];
        }
    }

    printf("O valor da média dos elementos da matriz é: %.2f", soma / (2*4));



return 0;
}
