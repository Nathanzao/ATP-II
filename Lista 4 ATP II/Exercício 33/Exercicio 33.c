#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para criar um arquivo bin ́ario contendo dados
estruturados e implementar uma fun ̧c ̃ao de busca eficiente.
*/

typedef struct{
    int RA;
    int serie;
}reg;

void imprimirStruct(reg variavel_aux){
    printf("A serie: %d.\n", variavel_aux.serie);
    printf("O RA: %d.\n", variavel_aux.RA);
}


int buscaBinariaRecursiva(int *vetor, int inicio, int fim, int chave){
    int meio;
    if(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(vetor[meio] == chave){
            return meio;
        }else{
            if(chave < vetor[meio]){
                return buscaBinariaRecursiva(vetor, inicio, meio - 1, chave);
            }else{
                return buscaBinariaRecursiva(vetor, meio + 1, fim, chave);
            }
        }
    }else{
        return -1;
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

    registros[0].RA = 111;
    registros[0].serie = 222;

    registros[1].RA = 333;
    registros[1].serie = 444;

    registros[2].RA = 555;
    registros[2].serie = 666;


    fwrite(&registros, sizeof(reg), 3, arq);

fclose(arq);
}

void lerBinarioEBuscaBinaria (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    reg registros[3];

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n");
    }


    fread(&registros, sizeof(reg), 3, arq);

    for(int i = 0; i < 3; i++){
        imprimirStruct(registros[i]);
        printf("\n\n");
    }

    int ra_desejado = 555;
    int vetor_ra[3];

    for(int i = 0; i < 3; i++){
        vetor_ra[i] = registros[i].RA;
    }


    int indice = buscaBinariaRecursiva(vetor_ra, 0, 2, ra_desejado);
    if(indice != -1){
        printf("O RA indica a estrutura %d.\n\n", indice);
        imprimirStruct(registros[indice]);
    }else{
        printf("Nao ha esse RA.\n");
    }



fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBin.bin");
    lerBinarioEBuscaBinaria("ArquivoBin.bin");

return 0;
}
 