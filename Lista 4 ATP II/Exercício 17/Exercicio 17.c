#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para calcular a soma de todos os números em
um arquivo de texto contendo números inteiros.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *Arq;
    Arq = fopen("ArquivoTexto.txt", "r");
    char caractere, sstring[30];
    int soma = 0, numero = 0;

    if(Arq == NULL){
        printf("O arquivo não abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }

    while((fscanf(Arq, "%s", sstring)) != EOF){
        numero = atoi(sstring);
        soma += numero;
    }

    printf("\nA soma de todos os valores do arquivo é: %d.\n\n", soma);



fclose(Arq);
return 0;
}
