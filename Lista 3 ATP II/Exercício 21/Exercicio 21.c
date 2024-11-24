#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
produto (nome, c ́odigo, pre ̧co) e imprima o resultado.
*/

typedef struct{
    int tamanhoInt;
    float tamanhoFloat;
    char tamanhoChar;
}Tamanho;


int main (){
setlocale(LC_ALL, "Portuguese");
    Tamanho tamanhoszinhos;
    int espaco = sizeof(tamanhoszinhos);

    printf("A quantidade de memoria ocupada pelas variaveis na Struct eh: %d.\n\n", espaco);


return 0;
}
