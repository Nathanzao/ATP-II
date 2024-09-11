#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que preencha um array de 15
inteiros com números aleatórios entre 0 e 50. Em seguida, encontre e imprima
o maior valor do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
srand(time(0));
int vetor[15], maior_numero = 0;
    for (int i = 0; i < 15; i++){
        vetor[i] = rand() % 50;
        if (i == '0'){
            maior_numero = vetor[i];
        }else{
            if (vetor[i] > maior_numero){
                maior_numero = vetor[i];
            }
        }
        printf("%d\n", vetor[i]);
    }
    printf("\nO maior número é: %d\n", maior_numero);

return 0;
}
