#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que preencha um array de 12
inteiros com números aleatórios entre -20 e 20. Em seguida, conte e imprima
quantos números são negativos.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
srand(time(0));
int vetor[12], quantidade_negativos = 0;
    for (int i = 0; i < 12; i++){
        vetor[i] = -20 + rand() % 40;
        if (vetor[i] < 0){
            quantidade_negativos++;
        }
        printf("%d\n", vetor[i]);
    }
    printf("\nA quantidade de negativos é: %d\n", quantidade_negativos);


return 0;
}
