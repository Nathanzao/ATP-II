#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que receba um n�mero inteiro
como argumento na linha de comando e verifique se ele � par ou �mpar.
*/

int main (int argc, char **argv){
setlocale(LC_ALL, "Portuguese");
int numero = atoi(argv[1]);

    if(argc > 2){
        printf("Tem que ser apenas 1 n�mero inteiro.");
    }else{
        if(numero % 2 == 0){
            printf("� par.");
        }else{
            printf("� �mpar.");
        }
    }



return 0;
}
