#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que receba 3 números inteiros como
argumentos na linha de comando e imprima a soma deles.
*/

int main (int argc, char **argv){
setlocale(LC_ALL, "Portuguese");
int valor = 0, soma = 0;

    for(int i = 1; i < argc; i++){
        valor = atoi(argv[i]);
        soma += valor;
    }

    printf("O valor da soma é: %d", soma);

return 0;
}
