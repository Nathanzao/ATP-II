#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que use um array de ponteiros
para armazenar 4 strings e encontre a string de maior comprimento.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char *vetor[4];
int maior = 0, indice_maior = 0;
    for(int i = 0; i < 4; i++){ // armazenando as strings.
        vetor[i] = malloc(100 * sizeof(char));
        printf("Digite a String na %dª posição: ", i+1);
        fgets(vetor[i], 100, stdin);
    }


    maior = strlen(vetor[0]);
    for(int i = 0; i < 4; i++){ // verificando qual strlen é maior.
        if(strlen(vetor[i]) > maior){
            maior = strlen(vetor[i]);
            indice_maior = i;
        }
    }

    printf("\n\nO maior é a String na %dª posição, com %d caracteres. Ela é: %s\n\n", indice_maior + 1, maior - 1, vetor[indice_maior]);




for(int i = 0; i < 4; i++){
    free(vetor[i]);
}
free(vetor);
return 0;
}
