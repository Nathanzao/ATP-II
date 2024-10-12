#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que preencha uma matriz 4x4 com
números aleatórios e depois ordene os elementos de cada linha.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
srand(time(NULL));
int matriz[4][4], variavel_aux = 0;

    for(int i = 0; i < 4; i++){ //preenchendo a matriz com valores aleatórios.
        for(int j = 0; j < 4; j++){
            matriz[i][j] = rand () % 10;
        }
    }



    printf("Matriz: \n");
    for (int i = 0; i < 4; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 4; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n\n\n");


    for(int i = 0; i < 4; i++){ //invertendo a matriz.
        for(int j = 0; j < 4; j++){
            for(int d = 0; d < 4; d++){
                if(matriz[i][j] < matriz[i][d]){
                    variavel_aux = matriz[i][j];
                    matriz[i][j] = matriz[i][d];
                    matriz[i][d] = variavel_aux;
                }
            }
        }
    }



    printf("\n\n\n");
    printf("Matriz Ordenada: \n");
    for (int i = 0; i < 4; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 4; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n\n\n");



return 0;
}