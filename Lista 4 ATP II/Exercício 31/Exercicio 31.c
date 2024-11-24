#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para calcular o tamanho total ocupado por
todos os arquivos em um diret ́orio.
*/


typedef struct{
    int RA;
    int serie;
    char nome[30];
}reg;


void criarArquivoBinario1(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Criamos o arquivo 1, quando criado.\n");
    }

    reg registros = {
        .nome = "Nathan Alves",
        .RA = 1234,
        .serie = 4
    };

    fwrite(&registros, sizeof(reg), 1, arq);

fclose(arq);
}

void criarArquivoBinario2(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Criamos o arquivo 2, quando criado.\n");
    }

    reg registros = {
        .nome = "Jose Pereira",
        .RA = 7777,
        .serie = 10
    };

    fwrite(&registros, sizeof(reg), 1, arq);

fclose(arq);
}

void criarArquivoBinario3(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Criamos o arquivo 3, quando criado.\n");
    }

    reg registros = {
        .nome = "Nathan ehFoda",
        .RA = 6666,
        .serie = 11
    };

    fwrite(&registros, sizeof(reg), 1, arq);


fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");
int tamanho = 0;

    criarArquivoBinario1("ArquivoBin1.bin");
    criarArquivoBinario2("ArquivoBin2.bin");
    criarArquivoBinario3("ArquivoBin3.bin");

    FILE *arq1 = fopen("ArquivoBin1.bin", "rb");
    FILE *arq2 = fopen("ArquivoBin2.bin", "rb");
    FILE *arq3 = fopen("ArquivoBin3.bin", "rb");

    if (arq1 || arq2 || arq3 == NULL) {
        printf("Algum arquivo deu erro na abertura.\n");
    }else{
        printf("Todos os arquivos abriram corretamente.\n");
    }

    tamanho = sizeof(*arq1) + sizeof(*arq2) + sizeof(*arq3);

    printf("\n\nO tamanho total do direito eh: %d.\n", tamanho);

    
fclose(arq1);
fclose(arq2);
fclose(arq3);
return 0;
}
