#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que verifique se uma matriz 3x3 é
simétrica.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[3][3], contador_similaridade = 0;
    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor do elemento da matriz da %d linha e %d coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz.
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
    for (int i = 0; i < 3; i++){ // vendo se a matriz é simétrica.
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] == matriz[j][i]){
                contador_similaridade++;
            }
        }
    }

    if (contador_similaridade == 9){
        printf("A matriz é simétrica!");
    }else{
        printf("A matriz não é simétrica!");
    }

return 0;
}
