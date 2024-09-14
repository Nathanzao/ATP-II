#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que receba uma string como
argumento na linha de comando e conte o número de caracteres dessa string.
*/

int main (int argc, char **argv){
setlocale(LC_ALL, "Portuguese");


    if(argc > 2){
        printf("É apenas para ter uma String.");
    }else{
        printf("O tamanho da String é: %d", strlen(argv[1]));
    }

return 0;
}
