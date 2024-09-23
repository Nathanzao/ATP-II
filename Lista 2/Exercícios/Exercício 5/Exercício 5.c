#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que transponha uma matriz 3x2 para
uma matriz 2x3.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[3][2], matriz_transposta[2][3];

    for (int i = 0; i < 3; i++){ // for para armazenar valores da matriz a.
        for (int j = 0; j < 2; j++){
            printf("Digite o valor da matriz A na %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){ // for para imprimir os valores da matriz a
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < 2; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");

    for (int i = 0; i < 2; i++){ // fazendo a matriz transposta.
        for (int j = 0; j < 3; j++){
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    for (int i = 0; i < 2; i++){
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < 3; j++){
            printf(" %d ", matriz_transposta[i][j]);
        }
    }



return 0;
}
