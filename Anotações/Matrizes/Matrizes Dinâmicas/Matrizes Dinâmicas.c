#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                                BÁSICO
São escritas com dois pontos '*', pois é um ponteiro de duas dimensões.
                                                MALLOC
Primeiro, temos que alocar um espaço de memória em MALLOC para as linhas:  matriz = malloc (qtdLinhas * sizeof (int*)) ;
Veja que cada linha aponta para um outro ponteiro. Esse outro ponteiro vai receber as colunas: matriz[i] = malloc (qtdColunas * sizeof (int)) ;
A partir dai, pode-se usar a matriz como se usaria normalmente. Mas lembre-se: estará usando malloc, então terá que tirar
essa memória daí no fim do programa.


*/

int main (){
setlocale(LC_ALL, "Portuguese");
int **matriz, largura = 0, altura = 0;
    printf("Digite o número de colunas: ");
    scanf("%d", &largura);
    fflush(stdin);
    printf("Digite o número de linhas: ");
    scanf("%d", &altura);

    matriz = malloc(altura * sizeof(int*));
    for (int i = 0; i < altura; i++){
        matriz[i] = malloc(largura * sizeof(int));
    }
    // a partir daqui já pode tratar como uma matriz normal.

    for (int i = 0; i < altura; i++){
        for (int j = 0; j < largura; j++){
            printf("Digite o valor da %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < altura; i++){
        if (i != 0){ // para começar uma nova linha.
            printf("\n");
        }
    for (int j = 0; j < largura; j++){
        printf(" %d ", matriz[i][j]);
        }
    }

    for (int i = 0; i < altura; i++){ // for: limpar as memórias.
        free(matriz[i]); // tirando as memórias das linhas. Ou seja, retirando as colunas.
    }
    free(matriz);
return 0;
}
