#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3
#define STRTAM 50

/*
Escreva um programa em C que use um array de ponteiros
para armazenar 3 strings, ordene as strings em ordem alfabética e as imprima.
*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    char *vetor[TAM], variavel_auxiliar[STRTAM], menor[STRTAM];
    int indice_menor = 0;


    for (int i = 0; i < 3; i++){ // preenchendo o vetor.
        printf("Digite a String desejada na %dª posição do vetor: ", i+1);
        scanf("%s", &variavel_auxiliar);
        vetor[i] = malloc((strlen(variavel_auxiliar) + 1)*sizeof(char)); //vetor já tá recebendo o tamanho exato da String mais o 1 do '\0'
        strcpy(vetor[i], variavel_auxiliar);
    }

    for(int i = 0; i < TAM; i++){

        strcpy(menor, vetor[i]);
        indice_menor = i;
        for(int j = i + 1; j < TAM; j++){
            if(strcmp(vetor[j], menor) < 0){
                strcpy(menor, vetor[j]);
                indice_menor = j;
            }
        }
        strcpy(variavel_auxiliar, vetor[i]);
        strcpy(vetor[i], vetor[indice_menor]);
        strcpy(vetor[indice_menor], variavel_auxiliar);
    }

    printf("\n\n\n");
    for(int i = 0; i < TAM; i++){
        printf("A %d String é: %s\n",i+1, vetor[i]);
    }






for (int i = 0; i < 3; i++){
    free(vetor[i]);
}
free(vetor);
return 0;
}

/*

if(strcmp(vetor[0], vetor[1]) < 0){ // se -1, primeira menor que a segunda.
        if(strcmp(vetor[0], vetor[2]) < 0){
            if(strcmp(vetor[1], vetor[2]) < 0){
                printf("Está ordenado já.");
            }else{
                strcpy(variavel_auxiliar, vetor[2]);
                strcpy(vetor[1], vetor[2]);
                strcpy(vetor[2], vetor[1]);
            }
        }
    }


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 30; j++){
            if (vetor[i][j] >= 97 && vetor[i][j] <= 122){
                vetor[i][j] = vetor[i][j] - 32;
                printf("\n\n%s\n\n", vetor[i][j]);
            }
            if (strcmp(vetor[i][j], vetor[i][j + 1] > 0)){
                vetor[i][j] = vetor[i][j + 1];
            }
            if (strcmp(vetor[i][j], vetor[i][j + 1] = 0)){
                printf("São iguais.");
            }
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 30; j++){
            printf("%s\n", vetor[i][j]);
        }
    }

*/
