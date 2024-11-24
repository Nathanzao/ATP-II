#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
pessoa (nome, idade, altura) e imprima o resultado.
*/

typedef struct {
    char nome[30];
    int idade;
    int altura;
}dados;

void tamanhoStruct(dados m){
    int tamanhoNome = sizeof(m.nome), tamanhoIdade = sizeof(m.idade), tamanhoAltura = sizeof(m.altura), tamanhoTotal;

    tamanhoTotal = tamanhoNome + tamanhoAltura + tamanhoIdade;
    printf("\nTamanho total eh: %d.\n", tamanhoTotal);

}

int main (){
setlocale(LC_ALL, "Portuguese");
    dados Dadinhos;
    int tamanhoT;

    tamanhoStruct(Dadinhos);

return 0;
}
