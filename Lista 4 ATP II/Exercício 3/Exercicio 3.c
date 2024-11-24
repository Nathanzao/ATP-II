#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para contar o n ́umero de linhas em um arquivo
de texto.
*/

int main (){

    setlocale(LC_ALL, "Portuguese");
    FILE *arquivo;
    arquivo = fopen("Arquivo_Texto.txt", "r");

    char conteudo;
    int linhas = 0;

    if(arquivo == NULL){ /* Verificando se deu algum erro na abertura. */
        printf("Erro.");
        return -1;
    }else{
        printf("Arquivo abriu corretamente.\n");
    }

    while((fscanf(arquivo, "%c", &conteudo)) != EOF){
        if(conteudo == '\n'){
            linhas++;
        }
    }

    if(linhas == 0 && conteudo == EOF){
        linhas = 1;
    }

    printf("\nA quantidade de linhas eh: %d.\n\n", linhas+1);

    printf("\n\n");


    fclose(arquivo);
return 0;
}
