#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para dividir um arquivo bin ́ario grande em
arquivos menores de tamanho fixo.
*/

typedef struct{
    int RA;
    int serie;
}reg;


void criarArquivoBinario(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    reg registros = {
        .RA = 1234,
        .serie = 4
    };

    fwrite(&registros, sizeof(reg), 1, arq);

fclose(arq);
}
void lerBinarioECriar (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    FILE *arq1 = fopen("ArquivoBin2.bin", "wb");
    FILE *arq2 = fopen("ArquivoBin3.bin", "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n");
    }

    reg registros;

    fread(&registros, sizeof(reg), 1, arq);

    fwrite(&registros.RA, sizeof(reg), 1, arq1);

    fwrite(&registros.RA, sizeof(reg), 1, arq2);

    remove(nomeArquivo);
fclose(arq);
fclose(arq1);
fclose(arq2);
}


int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBin.bin");
    lerBinarioECriar("ArquivoBin.bin");

return 0;
}
