#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para encontrar arquivos duplicados em um
diret ́orio.
*/


void criarArquivoBinario1(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    char nome[30] = "Nathan";

    fwrite(nome, sizeof(nome), 1, arq);

fclose(arq);
}

void criarArquivoBinario2(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    char nome[30] = "Nathan";

    fwrite(nome, sizeof(nome), 1, arq);

fclose(arq);
}

int compara(){
    FILE *arq1 = fopen("ArquivoBinario1.bin", "rb");
    FILE *arq2 = fopen("ArquivoBinario2.bin", "rb");
    char mensagem1[30], mensagem2[30];
    int i = 0, j = 0;

    if (arq1 == NULL) {
        printf("Erro ao criar o 1 arquivo.\n");
    }else{
        printf("Abrimos o 1 arquivo, quando criado.\n");
    }

    if (arq2 == NULL) {
        printf("Erro ao criar o 2 arquivo.\n");
    }else{
        printf("Abrimos o 2 arquivo, quando criado.\n");
    }

    while(((fread(mensagem1, sizeof(char), 30, arq1)) || (fread(mensagem2, sizeof(char), 30, arq2)))  == feof){
        if((strcmp(mensagem1, mensagem2)) != 0){
            i++;
        }
        j++;
    }

    if(i == j){ 
        return 0;
    }else{
        return -1;
    }


fclose(arq1);
fclose(arq2);

return 0;
}



int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario1("ArquivoBinario1.bin");
    criarArquivoBinario2("ArquivoBinario2.bin");

    if(compara() == 0){
        printf("\n\nSao arquivos duplicados.\n");
    }else{
        printf("Nao sao arquivos duplicados.\n\n");
    }
    


return 0;
}
