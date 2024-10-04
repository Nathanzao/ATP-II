#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que calcule a diagonal principal de
uma matriz 5x5.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[5][5], valores_diagonal[5], cont = 0, diagonal_resultado = 1;

    for (int i = 0; i < 5; i++){ // for para armazenar valores da matriz a.
        for (int j = 0; j < 5; j++){
            printf("Digite o valor da matriz A na %d� linha e %d� coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 5; i++){ // for para imprimir os valores da matriz a
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < 5; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");

    for (int i = 0; i < 5; i++){ //armazenando os valores da diagonal principal.
        for(int j = 0; j < 5; j++){
            if (i == j){
                valores_diagonal[cont] = matriz[i][j];
                cont++;
            }
        }
    }
    for (int i = 0; i < 5; i++){
        diagonal_resultado = diagonal_resultado * valores_diagonal[i];
    }
    printf("Valor da diagonal principal: %d", diagonal_resultado);

return 0;
}
