#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que multiplique duas matrizes 3x3.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz_a[3][3], matriz_b[3][3], matriz_c[3][3];

    for (int i = 0; i < 3; i++){ // for para armazenar valores da matriz a.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da matriz A na %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz_a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){ // for para armazenar valores da matriz b.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da matriz B na %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz_b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){ // fazendo a multiplicação de matrizes
        for (int j = 0; j < 3; j++){
            matriz_c[i][j] = 0; // preencher todos os valores da matriz c como zero.
                for (int d = 0; d < 3; d++){
                    matriz_c[i][j] = matriz_c[i][j] + matriz_a[i][d] * matriz_b[d][j];
                }
        }
    }

    for (int i = 0; i < 3; i++){
            if (i != 0){
                printf("\n");
            }
        for (int j = 0; j < 3; j++){
            printf(" %d ", matriz_c[i][j]);
        }
    }

return 0;
}
