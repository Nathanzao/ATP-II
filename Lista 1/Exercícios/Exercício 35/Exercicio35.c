#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que receba um número inteiro
como argumento na linha de comando e verifique se ele é par ou ímpar.
*/

int main (int argc, char **argv){
setlocale(LC_ALL, "Portuguese");
int numero = atoi(argv[1]);

    if(argc > 2){
        printf("Tem que ser apenas 1 número inteiro.");
    }else{
        if(numero % 2 == 0){
            printf("É par.");
        }else{
            printf("É ímpar.");
        }
    }



return 0;
}
