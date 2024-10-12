#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que verifique se duas matrizes 3x3
s�o ortogonais.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[3][3], matriz_transposta_a[3][3], matriz_multiplicada_a[3][3];
int matriz_b[3][3], matriz_transposta_b[3][3], matriz_multiplicada_b[3][3];

    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz A.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor do elemento da matriz da %d� linha e %d� coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz A: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz A.
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


    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz transposta.
        for (int j = 0; j < 3; j++){
            matriz_transposta_a[i][j] = matriz[j][i];
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz Transposta A: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz transposta.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz_transposta_a[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for(int i = 0; i < 3; i++){ // multiplicando matriz por sua transposta.
        for(int j = 0; j < 3; j++){
            matriz_multiplicada_a[i][j]= 0;
            for(int d = 0; d < 3; d++){
                matriz_multiplicada_a[i][j] += matriz[i][d] * matriz_transposta_a[d][j];
            }
        }
    }

    for(int i = 0; i < 3; i++){ // vendo se eh identidade.
        for(int j = 0; j < 3; j++){
            if(i == j){
                if(matriz_multiplicada_a[i][j] != 1){
                    printf("A matriz A nao eh ortogonal.\n");
                    break;
                }
            }else{
                if(matriz_multiplicada_a[i][j] != 0){
                    printf("A matriz A nao eh ortogonal.\n");
                    break;
                }
                printf("A matriz A eh ortogonal.\n");
            }
        }
    }








    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz B.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor do elemento da matriz da %d� linha e %d� coluna: ", i+1, j+1);
            scanf("%d", &matriz_b[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz A: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz B.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz_b[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");


    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz transposta.
        for (int j = 0; j < 3; j++){
            matriz_transposta_b[i][j] = matriz_b[j][i];
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz Transposta B: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz transposta.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz_transposta_b[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");


    for(int i = 0; i < 3; i++){ // multiplicando matriz por sua transposta.
        for(int j = 0; j < 3; j++){
            matriz_multiplicada_b[i][j]= 0;
            for(int d = 0; d < 3; d++){
                matriz_multiplicada_b[i][j] += matriz_b[i][d] * matriz_transposta_b[d][j];
            }
        }
    }




    for(int i = 0; i < 3; i++){ // vendo se eh identidade.
        for(int j = 0; j < 3; j++){
            if(i == j){
                if(matriz_multiplicada_b[i][j] != 1){
                    printf("A matriz B nao eh ortogonal.\n");
                    break;
                }
            }else{
                if(matriz_multiplicada_b[i][j] != 0){
                    printf("A matriz B nao eh ortogonal.\n");
                    break;
                }
                printf("A matriz B eh ortogonal.\n");
            }
        }
    }


return 0;
}
