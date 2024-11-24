#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX 50

/*
Escreva um programa em C para comparar dois arquivos de texto linha
por linha e mostrar as diferencas.
*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    FILE *Arq, *Arq2;
    Arq = fopen("ArquivoTexto.txt", "r");
    Arq2 = fopen("ArquivoTexto2.txt", "r");
    char caractere1[MAX], caractere2[MAX], diferenca[MAX];
    int continua = 1, fimArq1 =0, fimArq2 = 0;


    if(Arq == NULL){
        printf("O arquivo 1 nao abriu corretamente.\n");
    }else{
        printf("O arquivo 1 abriu corretamente.\n");
    }

    if(Arq2 == NULL){
        printf("O arquivo 2 nao abriu corretamente.\n");
    }else{
        printf("O arquivo 2 abriu corretamente.\n");
    }

    while(continua == 1)
    {
        if(fscanf(Arq, "%s", caractere1) == EOF)
            fimArq1 = 1;
        if(fscanf(Arq2, "%s", caractere2) == EOF)
            fimArq2 = 1;

        if(fimArq1 || fimArq2)
            continua = 0;


        for(int i = 0; i < MAX; i++){
            if(caractere1[i] != caractere2[i])
                diferenca[i] = caractere1[i];
            else
                diferenca[i] = ' ';
        }
        printf("\n Arq1:%s    ...        Arq2:%s       ...        Dif:%s",caractere1,caractere2,diferenca);
    }






    fclose(Arq);
    fclose(Arq2);
    return 0;
}
