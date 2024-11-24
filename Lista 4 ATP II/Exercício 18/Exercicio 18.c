#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para encontrar o maior e o menor n ́umero em
um arquivo de texto contendo números inteiros.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *Arq;
    Arq = fopen("ArquivoTexto.txt", "r");
    char caractere[30];
    int menor = 0, maior = 0, i = 0, vetor[100];

    if(Arq == NULL){
        printf("O arquivo nao abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }


    while((fscanf(Arq, "%s", caractere)) != EOF){
        vetor[i] = atoi(caractere);
            if(i == 0){
                maior = vetor[i];
                menor = vetor[i];
            }else{
                if(maior < vetor[i]){
                    maior = vetor[i];
                }
                if(menor > vetor[i]){
                    menor = vetor[i];
                }
            }
        i++;
    }



    printf("O maior numero eh: %d.\n", maior);
    printf("O menor numero eh: %d.\n", menor);

fclose(Arq);
return 0;
}

/*     menor = vetor[0];
    maior = vetor[0];
    int tamanho = sizeof(vetor) / sizeof(int);
    for(i = 0; i < tamanho; i++){

        if(menor > vetor[i]){
            menor = vetor[i];
        }

        if(maior < vetor[i]){
            maior = vetor[i];
        }

    } */