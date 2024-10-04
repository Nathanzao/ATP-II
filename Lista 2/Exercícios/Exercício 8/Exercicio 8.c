#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que realize a rotação de uma matriz
quadrada 4x4 no sentido horário.
*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    int matriz[4][4] = {{1,2,3,4},{11,12,13,14},{21,22,23,24},{31,32,33,34}},
        matriz_b[4][4];

    /*for(int i = 0; i < 4; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 4; j++){
            printf("Digite o valor do elemento da matriz da %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }*/

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz: \n");
    for (int i = 0; i < 4; i++){ //exibindo a matriz.
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

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz_b[i][j] = matriz[3 - j][i];
        }
    }

    for (int i = 0; i < 4; i++){ //exibindo a matriz_b.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 4; j++){
            printf(" %d ", matriz_b[i][j]);
        }
    }



return 0;
}
