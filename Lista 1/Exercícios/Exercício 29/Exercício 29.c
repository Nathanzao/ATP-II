#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que use um array de ponteiros para
armazenar e imprimir 5 strings.
*/

int main (){

    setlocale(LC_ALL, "Portuguese");
    char **vetor;
    int quantidade_strings = 5;

    vetor = malloc(quantidade_strings * sizeof(char*));

    for (int i = 0; i < quantidade_strings; i++){
        vetor[i] = malloc(sizeof(char)*20);
    }

    for (int i = 0; i < quantidade_strings; i++){ //armazenando as strings.
        printf("Digite a String para a %d� posi��o do vetor: ", i+1);
        gets(vetor[i]);
        printf("Vetor: %s\n", vetor[i]);
    }

    for (int i = 0; i < quantidade_strings; i++){ // imprimindo as strings.
        printf("%d� posi��o do vetor: %s\n", i+1, *(vetor + i));
    }



    for (int i = 0; i < quantidade_strings; i++){
        free(vetor[i]);
    }

    free(vetor);

    return 0;
}


/*

    if (vetor == 0){
        printf("N�o h� mem�ria suficiente.");
    }
    for (int i = 0; i < quantidade_strings; i++){
        printf("Digite a %d� String desejada: \n", i+1);
        gets(substituivel);
        fflush(stdin);
        vetor[i] = substituivel;
        printf("\n%d� String: %s", i+1, *(vetor + i));
    }
*/
