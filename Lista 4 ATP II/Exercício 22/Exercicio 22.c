#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para ler um arquivo de texto e exibir o n ́umero
de ocorrˆencias de uma determinada palavra.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *Arq;
    Arq = fopen("ArquivoTexto.txt", "r");
    char palavraDesejada[30] = "haha", palavraEscolhida[30];
    int contador = 0;

    if(Arq == NULL){
        printf("O arquivo nao abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }


    while((fscanf(Arq, "%s", palavraEscolhida)) != EOF){
        if((strcmp(palavraDesejada, palavraEscolhida)) == 0){
            contador++;
        }
    }

    printf("\nA quantidade de vezes que 'haha' apareceu eh: %d.\n", contador);


fclose(Arq);
return 0;
}