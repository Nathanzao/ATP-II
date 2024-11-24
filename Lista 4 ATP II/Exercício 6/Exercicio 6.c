#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para buscar e exibir um determinado caractere
em um arquivo de texto.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char caractere_desejado, caractere;
int posicao = 0, locali = 0;

    FILE *ArqLer;
    ArqLer = fopen("ArquivoTexto.txt", "r");

        if(ArqLer == NULL){
            printf("O arquivo para leitura não abriu corretamente.");
        }else{
            printf("O arquivo para leitura abriu corretamente.");
        }

    printf("\nDigite o caractere que deseja buscar: ");
    scanf("%c", &caractere_desejado);
    fflush(stdin);

    while((fscanf(ArqLer, "%c", &caractere)) != EOF){
        posicao++;
        if(caractere == caractere_desejado){
            locali = posicao;
            printf("O caracterece (%c) está no caractere: %d.\n", caractere, locali);
        }
    }

fclose(ArqLer);
return 0;
}
