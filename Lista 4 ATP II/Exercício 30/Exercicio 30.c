#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para ler um arquivo bin ́ario contendo registros
de alunos e exibir os dados formatados.
*/

typedef struct{
    int RA;
    int serie;
    char nome[30];
}reg;

void imprimirStruct(reg variavel_aux){
    printf("\nO nome: %s.\n", variavel_aux.nome);
    printf("A serie: %d.\n", variavel_aux.serie);
    printf("O RA: %d.\n", variavel_aux.RA);
}

void criarArquivoBinario(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    reg registros = {
        .nome = "Nathan Alves",
        .RA = 1234,
        .serie = 4
    };

    fwrite(&registros, sizeof(reg), 1, arq);

fclose(arq);
}

void lerBinario (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    reg registros;

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n");
    }


    fread(&registros, sizeof(reg), 1, arq);

    imprimirStruct(registros);

    fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBinario.bin");
    lerBinario("ArquivoBinario.bin"); 


return 0;
}
