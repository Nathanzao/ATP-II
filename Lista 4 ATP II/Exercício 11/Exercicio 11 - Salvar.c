#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para ler e exibir um registro espec ́ıfico em um
arquivo bin ́ario.
*/

typedef struct{
    int RA;
    char nome[30];
}Registros;



int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *arq;
    arq = fopen("Registros.bin", "wb");

    if(arq == NULL){
        printf("O arquivo nao abriu corretamente.");
    }else{
        printf("O arquivo abriu corretamente.");
    }

    Registros registros[5];

    printf("Digite o RA: ");
    scanf("%d", &registros[2].RA);
    fflush(stdin);

    printf("Digite o seu nome: ");
    fgets(registros[2].nome, 30, stdin);
    
    fwrite(registros,sizeof(Registros),5,arq);


    printf("\n\nOperações nos arquivos feitas com sucesso.\n\n");
fclose(arq);
return 0;
}