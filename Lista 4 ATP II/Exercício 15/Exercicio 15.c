#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para atualizar um registro em um arquivo
bin ́ario.
*/

typedef struct{
    int RA;
    int serie;
}reg;

void imprimirStruct(reg variavel_aux){
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

    reg registros[2];

    registros[0].RA = 1234;
    registros[0].serie = 4321;

    registros[1].RA = 5678;
    registros[1].serie = 8765;

    for(int i = 0; i < 2; i++){
        imprimirStruct(registros[i]);
        printf("\n\n");
    }

    fwrite(&registros, sizeof(reg), 2, arq);

fclose(arq);
}

void lerBinarioEAtualizarReg (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    reg registros[2];

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n\n");
    }


    fread(&registros, sizeof(reg), 2, arq);

    registros[0].RA = 0000;
    registros[0].serie = 1111;

    for(int i = 0; i < 2; i++){
        imprimirStruct(registros[i]);
        printf("\n\n");
    }

fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBinario.bin");
    lerBinarioEAtualizarReg("ArquivoBinario.bin"); 

return 0;
}
