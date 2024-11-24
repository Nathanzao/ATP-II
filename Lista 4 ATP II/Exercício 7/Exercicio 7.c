#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para substituir uma palavra por outra em um
arquivo de texto.
*/

int main (){

    setlocale(LC_ALL, "Portuguese");
    char palavraSubstituir[30], palavraColocar[30], copiarString[30];

    FILE *ArqSubsti;
    FILE *ArqNovo;

    ArqSubsti = fopen("ArquivoTexto.txt", "r+");
    ArqNovo   = fopen("ArquivoNovo.txt", "w");

    if(ArqSubsti == NULL){
        printf("O arquivo não abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }

    if(ArqNovo == NULL){
        printf("O arquivo não abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }


    printf("Digite a palavra que deseja substituir: ");
    fflush(stdin);
    scanf("%s",palavraSubstituir);


    printf("Digite a palavra que deseja colocar: ");
    fflush(stdin);
    scanf("%s",palavraColocar);


    while((fscanf(ArqSubsti, "%s", copiarString)) != EOF){

        if(strcmp(palavraSubstituir, copiarString) == 0){
            fprintf(ArqNovo, "%s ", palavraColocar);
            printf("ENTREI %s\n",palavraColocar);

        }
        else{
            fprintf(ArqNovo,"%s ",copiarString);
        }
    }

    fclose(ArqSubsti);
    return 0;
}
