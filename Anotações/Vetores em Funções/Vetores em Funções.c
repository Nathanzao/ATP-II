#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                        INTRODU��O
Para colocar vetores em fun��es, temos apenas que puxar ele como um ponteiro. Para isso, sequer precisamos declarar
um ponteiro din�mico, basta ser um vetor normal (que tamb�m � um ponteiro). Se for vetor din�mico tamb�m n�o muda
nada (afinal, depois de usar o malloc ele passar a ser um vetor comum).

                                        EXEMPLO (exerc�cio 39 da lista 1 de ATP II):
"Escreva um programa em C que declare um array de 6
inteiros e passe esse array para uma fun��o que conte quantos elementos s�o
positivos."
*/


void valores_positivos(int *vvetor){
    int quantidade_positivos = 0;
    for (int i = 0; i < 6; i++){ // comparar pra ver se o n�mero � positivo.
        if (*(vvetor + i) > 0){
            quantidade_positivos++;
        }
    }
    printf("\nQuantidade de positivos: %d", quantidade_positivos); // dar printf na quantidade de positivos.
}

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[6];
    for (int i = 0; i < 6; i++){ // preencher o vetor din�mico.
        printf("Digite o valor da %d� posi��o do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    valores_positivos(vetor); // n�o precisa por o '*'.

return 0;
}
