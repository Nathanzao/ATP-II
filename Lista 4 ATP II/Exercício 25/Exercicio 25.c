#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para criar um arquivo de texto com uma
estrutura de dados complexa e salvar no formato adequado.
*/

typedef struct{
    char nome[30];
    int ano;
    char criador[30];
    char pais[30];
}Marca;


void criarArquivoTexto(char *NomeArquivo){
    FILE *arq = fopen(NomeArquivo, "w");

    if(arq == NULL){
        printf("Arquivo nao criado corretamente.\n");
    }else{
        printf("Arquivo criado corretamente.\n");
    }

    Marca marcazinha = {
        .ano = 1997,
        .criador = "Pereira Alves",
        .nome = "Portygak",
        .pais = "Portugal"
    };

    fprintf(arq, "Criador da marca: %s.\n", marcazinha.criador);
    fprintf(arq, "Nome da marca: %s.\n", marcazinha.nome);
    fprintf(arq, "Ano da marca: %d.\n", marcazinha.ano);
    fprintf(arq, "Pais da marca: %s.\n", marcazinha.pais);

fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoTexto("ArquivoTexto.txt");

return 0;
}
