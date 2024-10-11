#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define largura 3
#define altura 3


/*
                                        POR QU�?
Forma de guardas valores de maneira mais organizada.

                                        DEFINE
Embora n�o esteja relacionado com o t�pico de matriz, o #define define um valor fixo para uma vari�vel.

                                        B�SICO
Uma matriz � representada por um vetor comum com mais de uma dimens�o.
Ela aparece assim: matriz[altura][largura].
Se quisermos descobrir a posi��o de algum valor da matriz no vetor, fazemos:  linha * largura_matriz + coluna.
Caso desejamos trocar uma linha de lugar com a outra, temos que usar uma variavel auxiliar, de maneira bem semelhante
a como se quisessemos inverter a ordem de um vetor (EXERCICIO 15).


*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[altura][largura], variavel_auxiliar = 0;
    for (int i = 0; i < altura; i++){
        for (int j = 0; j < largura; j++){
            printf("Digite o valor da %d� linha e %d� coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < altura; i++){
        if (i != 0){ // para come�ar uma nova linha.
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
