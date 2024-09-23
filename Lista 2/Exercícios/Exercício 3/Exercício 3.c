#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que verifique se duas matrizes 2x2
são iguais.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz_a[2][2], matriz_b[2][2], igual = 0;


    for (int i = 0; i < 2; i++){ // for para armazenar valores da matriz a.
        for (int j = 0; j < 2; j++){
            printf("Digite o valor da matriz A na %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz_a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++){ // for para armazenar valores da matriz b.
        for (int j = 0; j < 2; j++){
            printf("Digite o valor da matriz B na %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz_b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++){ // for para imprimir os valores da matriz a
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < 2; j++){
            printf(" %d ", matriz_a[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < 2; i++){ // for para imprimir os valores da matriz b
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < 2; j++){
            printf(" %d ", matriz_b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++){
        for (int  j = 0; j < 2; j++){
            if (matriz_a[i][j] == matriz_b[i][j]){
                igual++;
            }
        }
    }
    if(igual == 4){
        printf("\nMatrizes iguais!");
    }else{
        printf("\nMatrizes diferentes.");
    }

return 0;
}
