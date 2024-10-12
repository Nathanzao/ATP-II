#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que roteie os elementos de uma matriz
3x3 em 90 graus no sentido anti-horário.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[3][3] = {{1,2,3},{11,12,13},{21,22,23}}, matriz_b[3][3];


    printf("\n\n\n");
    printf("Matriz: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n\n\n");



    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz_b[j][i] = matriz[i][j];
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz_b[i][j] = matriz[i][2 - j];
        }
    }


    printf("\n\n\n");
    printf("Matriz: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz_b[i][j]);
        }
    }
    printf("\n\n\n");    




return 0;
}