#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Faça uma matriz ser alocada dinamicamente e depois transforme-a em um vetor dinâmico.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int **matriz, *vetor, largura = 0, altura = 0, tamanho_vetor = 0, parte_matriz_vetor = 0;
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &largura);
    fflush(stdin);
    printf("\nDigite a quantidade de linhas da matriz: ");
    scanf("%d", &altura);

    matriz = malloc(altura * sizeof(int*)); // definindo as linhas da matriz.
    if (matriz == NULL){
        printf("Acabou a memória.");
    }
    for (int i = 0; i < altura; i++){ // definindo as colunas da matriz.
        matriz[i] = malloc(largura * sizeof(int));
    }
    for (int i = 0; i < altura; i++){ //preenchendo a matriz.
        for (int j = 0; j < largura; j++){
            printf("Digite o valor da %dª linha e %dª coluna: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < altura; i++){
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < largura; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    tamanho_vetor = altura * largura; //descobrindo o tamanho do vetor.
    vetor = malloc(tamanho_vetor * sizeof(int));

    for (int i = 0; i < altura; i++){ // preenchendo o vetor com a matriz.
        for (int j = 0; j < largura; j++){
            parte_matriz_vetor = i * largura + j;
            *(vetor + parte_matriz_vetor) = matriz[i][j];
        }
    }
    for (int i = 0; i < tamanho_vetor; i++){
        printf("\n\nVetor na %dª posição: %d", i+1, *(vetor + i));
    }



for (int i = 0; i < altura; i++){ // for: limpar as memórias.
    free(matriz[i]); // tirando as memórias das linhas. Ou seja, retirando as colunas.
}
free(matriz);
free(vetor);
return 0;
}
