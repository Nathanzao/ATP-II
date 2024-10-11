#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                                B�SICO
S�o escritas com dois pontos '*', pois � um ponteiro de duas dimens�es.
                                                MALLOC
Primeiro, temos que alocar um espa�o de mem�ria em MALLOC para as linhas:  matriz = malloc (qtdLinhas * sizeof (int*)) ;
Veja que cada linha aponta para um outro ponteiro. Esse outro ponteiro vai receber as colunas: matriz[i] = malloc (qtdColunas * sizeof (int)) ;
A partir dai, pode-se usar a matriz como se usaria normalmente. Mas lembre-se: estar� usando malloc, ent�o ter� que tirar
essa mem�ria da� no fim do programa.


*/

int main (){
setlocale(LC_ALL, "Portuguese");
int **matriz, largura = 0, altura = 0;
    printf("Digite o n�mero de colunas: ");
    scanf("%d", &largura);
    fflush(stdin);
    printf("Digite o n�mero de linhas: ");
    scanf("%d", &altura);

    matriz = malloc(altura * sizeof(int*));
    for (int i = 0; i < altura; i++){
        matriz[i] = malloc(largura * sizeof(int));
    }
    // a partir daqui j� pode tratar como uma matriz normal.

    for (int i = 0; i < altura; i++){
        for (int j = 0; j < largura; j++){
            printf("Digite o valor da %d� linha e %d� coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < altura; i++){
        if (i != 0){ // para come�ar uma nova linha.
            printf("\n");
        }
    for (int j = 0; j < largura; j++){
        printf(" %d ", matriz[i][j]);
        }
    }

    for (int i = 0; i < altura; i++){ // for: limpar as mem�rias.
        free(matriz[i]); // tirando as mem�rias das linhas. Ou seja, retirando as colunas.
    }
    free(matriz);
return 0;
}
