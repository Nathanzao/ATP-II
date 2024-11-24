#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para armazenar informa ̧c ̃oes de uma lista de
contatos em um arquivo de texto e implementar fun ̧c ̃oes para adicionar,
excluir e buscar contatos.
*/

typedef struct{
    int numero;
    int cpf;
}Conta;


void criarArquivoTexto (char *arquivoNome){
    FILE *arq = fopen(arquivoNome, "w");

    if(arq == NULL){
        printf("O arquivo não foi criado corretamente.\n");
    }else{
        printf("O arquivo foi criado corretamente.\n");
    }

    Conta contatos[3];

    contatos[0].cpf = 2121;
    contatos[0].numero = 111;

    contatos[1].cpf = 3131;
    contatos[1].numero = 222;

    contatos[2].cpf = 4141;
    contatos[2].numero = 333;

    for(int i = 0; i < 3; i++){
        fprintf(arq, "Contato %d.\n", i+1);
        fprintf(arq, "CPF: %d.\n", contatos[i].cpf);
        fprintf(arq, "NUMERO: %d.\n", contatos[i].numero);
    }



fclose(arq);
}


void adicionarContatos(char *arquivoNome){
    FILE *arq = fopen(arquivoNome, "r+");

    if(arq == NULL){
        printf("O arquivo não foi criado corretamente.\n");
    }else{
        printf("O arquivo foi criado corretamente.\n");
    }

    Conta contax;

    printf("Digite o CPF daquilo que quer adicionar: ");
    scanf("%d", contax.cpf);

    printf("Digite o NUMERO daquilo que quer adicionar: ");
    scanf("%d", contax.numero);

    fprintf(arq, "%s", "Contato novo adicionado: ");
    fprintf(arq, "CPF adicionado: %d.\n", contax.cpf);
    fprintf(arq, "NUMERO adicionado: %d.\n", contax.numero);


fclose(arq);
}

void BuscarContatos(char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "r");
    int cpf_desejado = 0;
    int numero;

    if(arq == NULL){
        printf("O arquivo não foi criado corretamente.\n");
    }else{
        printf("O arquivo foi criado corretamente.\n");
    }

    printf("Digite o CPF desejado: ");
    scanf("%d", &cpf_desejado);

    while((fscanf(arq, "%d", &numero)) != EOF){
        if(numero == cpf_desejado){
            printf("Contato 1");
        }
    }


fclose(arq);
}


int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoTexto("ArquivoTexto.txt");

return 0;
}
