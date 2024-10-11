#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define largura 3
#define altura 3


/*
                                        POR QUÊ?
Forma de guardas valores de maneira mais organizada.

                                        DEFINE
Embora não esteja relacionado com o tópico de matriz, o #define define um valor fixo para uma variável.

                                        BÁSICO
Uma matriz é representada por um vetor comum com mais de uma dimensão.
Ela aparece assim: matriz[altura][largura].
Se quisermos descobrir a posição de algum valor da matriz no vetor, fazemos:  linha * largura_matriz + coluna.
Caso desejamos trocar uma linha de lugar com a outra, temos que usar uma variavel auxiliar, de maneira bem semelhante
a como se quisessemos inverter a ordem de um vetor (EXERCICIO 15).


*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[altura][largura], variavel_auxiliar = 0;
    for (int i = 0; i < altura; i++){
        for (int j = 0; j < largura; j++){
            printf("Digite o valor da %dª linha e %dª coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < altura; i++){
        if (i != 0){ // para começar uma nova linha.
            printf("\n");
        }
        for (int j = 0; j < largura; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");


    for (int j = 0; j < 3; j++){ // alterando as linhas.
        variavel_auxiliar = matriz[1][j];
        matriz[1][j] = matriz[2][j];
        matriz[2][j] = variavel_auxiliar;
    }

    for (int i = 0; i < altura; i++){
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < largura; j++){
            printf(" %d ", matriz[i][j]);
        }
    }


return 0;
}
