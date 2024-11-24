#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para verificar se um arquivo de texto est ́a

vazio ou n ̃ao.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *Arq;
    Arq = fopen("ArquivoTexto.txt", "r");
    char caractere;
    int contador = 0;


    if(Arq == NULL){
        printf("O arquivo nao abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }

    while((fscanf(Arq, "%c", &caractere)) != EOF){
        contador++;
    }

    if(contador == 0){
        printf("Nao havia nada no arquivo.\n");
    }else{
        printf("Ha algo no arquivo.\n");
    }

return 0;
}