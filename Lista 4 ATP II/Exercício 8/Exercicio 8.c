#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para ler e exibir o conte ́udo de um arquivo
bin ́ario.
*/

void criarArquivoBinario(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    int valor = 1234;

    fwrite(&valor, sizeof(int), 1, arq);


fclose(arq);
}

void lerBinario (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    int conteudo;


    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n");
    }

    fread(&conteudo, sizeof(int), 1, arq);

    printf("O conteudo do arquivo binario era: %d.\n", conteudo);

fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBinario.bin");
    lerBinario("ArquivoBinario.bin");

return 0;
}
