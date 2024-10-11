#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x2 e armazene o resultado em uma matriz 2x2.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[2][3], matriz_b[3][2], matriz_c[2][2];

    for(int i = 0; i < 2; i++){ // armazenando os valores na matriz_a.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor do elemento da matriz da %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz: \n");
    for (int i = 0; i < 2; i++){ //exibindo a matriz_a.
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

    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz_b.
        for (int j = 0; j < 2; j++){
            printf("Digite o valor do elemento da matriz da %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz_b[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz B: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz_b.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 2; j++){
            printf(" %d ", matriz_b[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for(int i = 0; i < 2; i++){ // multiplicando as matrizes.
        for(int j = 0; j < 2; j++){
            matriz_c[i][j] = 0; // até esse for é pra zerar a matriz c. E algumas utilidades no próximo.
        }
    }

    for(int i = 0; i < 2; i++){ // multiplicando as matrizes.
        for(int j = 0; j < 2; j++){
            for(int d = 0; d < 3; d++){
                matriz_c[i][j] = matriz_c[i][j] + matriz[i][d] * matriz_b[d][j];
            }
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz Modificada: \n");
    for (int i = 0; i < 2; i++){ //exibindo a matriz_c.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 2; j++){
            printf(" %d ", matriz_c[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");


return 0;
}
