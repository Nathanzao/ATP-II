#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que verifique se uma matriz 4x4 é
uma matriz diagonal (todos elementos acima e abaixo da diagonal
principal são nulos).
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[4][4], contador1 = 0, contador2 = 0;

    for(int i = 0; i < 4; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 4; j++){
            printf("Digite o valor do elemento da matriz da %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

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

    for (int i = 0; i < 4; i++){ // verificando se é uma matriz diagonal.
        for (int j = 0; j < 4; j++){
            if(j != i){
                if (matriz[i][j] == 0){
                    contador1 += 1;
                }
            }else{
                if (matriz[i][j] != 0){
                    contador2 += 1;
                }
            }
        }
    }

    if(contador1 == (4*4) - 4 && contador2 == 4){
        printf("É uma matriz diagonal!\n\n");
    }else{
        printf("Não é uma matriz diagonal!\n\n");
    }

return 0;
}
