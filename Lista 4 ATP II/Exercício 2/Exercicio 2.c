#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para ler e exibir o conte ́udo de um arquivo de
texto.
*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    FILE *arquivo;
    arquivo = fopen("arq.txt", "r");
    char conteudo[30];

    if(arquivo == NULL){ /* Verificando se deu algum erro na abertura. */
        printf("Erro.");
        return -1;
    }else{
        printf("\nArquivo abriu corretamente.\n");
    }


    while(fscanf(arquivo, "%s", conteudo) != EOF)
        printf("%s ", conteudo);

    printf("\n\n");
    //printf("Aquilo que está escrito no arquivo eh: %s ", conteudo);


return 0;
}