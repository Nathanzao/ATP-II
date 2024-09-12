#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que encontre o maior e o menor
elemento em um array de 10 inteiros.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[10], maior = 0, menor = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o valor da %dª posição do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        if (i == 0){
            menor = vetor[i];
        }else{
            if (vetor[i] > maior){
                maior = vetor[i];
            }
            if (vetor[i] < menor){
                menor = vetor[i];
            }
        }
    } //fim do for
    printf("Maior valor: %d\nMenor valor: %d", maior, menor);

return 0;
}
