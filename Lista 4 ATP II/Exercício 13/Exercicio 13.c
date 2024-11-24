#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para ordenar registros em um arquivo bin ́ario
com base em um campo espec ́ıfico.
*/




typedef struct{
    int RA;
    int serie;
}reg;


void insertionSort(reg *registros, int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        reg temp = registros[i];
        int j = i - 1;

        while (j >= 0 && registros[j].RA > temp.RA) {
            registros[j + 1] = registros[j];
            j--;
        }

        registros[j + 1] = temp;
    }

    printf("\nOs registros ordenados com base no RA, sao: \n");
    for(int i = 0; i < 3; i++){
        printf("\n\n%d registro:\n\n",i+1);
        printf("RA: %d.\n", registros[i].RA);
        printf("Serie: %d.\n", registros[i].serie);
    }

}

void criarArquivoBinario(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    reg registros[3];
    
    registros[0].RA = 666;
    registros[0].serie = 1234;

    registros[1].RA = 333;
    registros[1].serie = 5521;

    registros[2].RA = 999;
    registros[2].serie = 921;
    

    fwrite(&registros, sizeof(reg), 3, arq);

fclose(arq);
}

void lerBinario (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    reg registros[3];

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n");
    }


    fread(&registros, sizeof(reg), 3, arq);


    insertionSort(registros, 3);

    


fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBinario.bin");
    lerBinario("ArquivoBinario.bin");

return 0;
}
