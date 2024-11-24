#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para deletar um registro espec ́ıfico de um
arquivo bin ́ario.
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

    fwrite(&registros, sizeof(reg), 2, arq);

fclose(arq);
}

void lerBinarioEAtualizarReg (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    FILE *arq1 = fopen("BinRenomear.bin", "wb");
    reg registros[2];

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler e modificar.\n\n");
    }


    fread(&registros, sizeof(reg), 2, arq);

    for(int i = 0; i < 2; i++){
        if(registros[i].RA == 5678){
            fwrite(&registros[i], sizeof(reg), 1, arq1);
        }
    }



    remove("ArquivoBin.bin");
    rename("BinRenomear.bin", "ArquivoBinario.bin"); /* Função rename deu errado. Assim como a REMOVE.*/

fclose(arq);
fclose(arq1);
}

void lerBinario (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    reg registros;

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n");
    }


    fread(&registros, sizeof(reg), 1, arq);

    imprimirStruct(registros);

    fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBin.bin");
    lerBinarioEAtualizarReg("ArquivoBin.bin");
    lerBinario("BinRenomear.bin");

return 0;
}
