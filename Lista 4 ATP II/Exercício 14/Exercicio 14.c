#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para buscar um registro em um arquivo bin ́ario
usando busca bin ́aria
*/

int buscaBinariaRecursiva(int *vetor, int inicio, int fim, int chave){
    int meio;
    if(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(chave == vetor[meio]){ /* Verificando o caso em que o meio pega o numero. */
            return meio;
        }else{
            if(chave < vetor[meio]){
                return buscaBinariaRecursiva(vetor, 0, meio - 1, chave);
            }else{
                return buscaBinariaRecursiva(vetor, meio + 1, fim, chave);
            }
        }
    }else{
        return -1; /* Não achamos o valor. Ou seja, não está no vetor. */
    }
}

void criarArquivoBinario(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    int vetor[6] = {3,6,7,8,9,10};


    fwrite(&vetor, sizeof(vetor), 1, arq);

fclose(arq);
}

void lerBinarioEBuscaBinaria (char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");
    int vetor[6];

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n");
    }


    fread(&vetor, sizeof(vetor), 1, arq);

    int indice_desejado = buscaBinariaRecursiva(vetor, 0, 5, 6);

    if(indice_desejado == -1){
        printf("\n\nNao ha esse valor no vetor.\n");
    }else{
        printf("\n\nEsse valor esta no indice %d.\n", indice_desejado);
    }

fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBinario.bin");
    lerBinarioEBuscaBinaria("ArquivoBinario.bin");

return 0;
}
