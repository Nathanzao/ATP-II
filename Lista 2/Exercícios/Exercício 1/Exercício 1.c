#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que declare e inicialize uma matriz
3x3 e imprima seus elementos.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da matriz na %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);
        }
    }

return 0;
}
