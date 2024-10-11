#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que copie os elementos de uma matriz
3x3 para outra matriz.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[3][3], matriz_b[4][4];

    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor do elemento da matriz da %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz padrão.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");


    for(int i = 0; i < 4; i++){ // limpando a matriz b.
        for (int j = 0; j < 4; j++){
            matriz_b[i][j] = 0;
        }
    }


    for (int i = 0; i < 3; i++){ //copiando uma matriz para outra.
        for (int j = 0; j < 3; j++){
            matriz_b[i][j] = matriz[i][j];
        }
    }

    for (int j = 0; j < 4; j++){ // preenchendo o que falta preencher da matriz.
        printf("Digite os valores para a linha 4 e %dª coluna que faltam: ", j+1);
        scanf("%d", &matriz_b[3][j]);
        printf("Digite os valores para a linha %d e 4ª coluna: ", j+1);
        scanf("%d", &matriz_b[j][3]);
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz B: \n");
    for (int i = 0; i < 4; i++){ //exibindo a matriz_b.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 4; j++){
            printf(" %d ", matriz_b[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");



return 0;
}
