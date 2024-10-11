#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                        INTRODUÇÃO
Para colocar vetores em funções, temos apenas que puxar ele como um ponteiro. Para isso, sequer precisamos declarar
um ponteiro dinâmico, basta ser um vetor normal (que também é um ponteiro). Se for vetor dinâmico também não muda
nada (afinal, depois de usar o malloc ele passar a ser um vetor comum).

                                        EXEMPLO (exercício 39 da lista 1 de ATP II):
"Escreva um programa em C que declare um array de 6
inteiros e passe esse array para uma função que conte quantos elementos são
positivos."
*/


void valores_positivos(int *vvetor){
    int quantidade_positivos = 0;
    for (int i = 0; i < 6; i++){ // comparar pra ver se o número é positivo.
        if (*(vvetor + i) > 0){
            quantidade_positivos++;
        }
    }
    printf("\nQuantidade de positivos: %d", quantidade_positivos); // dar printf na quantidade de positivos.
}

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[6];
    for (int i = 0; i < 6; i++){ // preencher o vetor dinâmico.
        printf("Digite o valor da %dª posição do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    valores_positivos(vetor); // não precisa por o '*'.

return 0;
}
