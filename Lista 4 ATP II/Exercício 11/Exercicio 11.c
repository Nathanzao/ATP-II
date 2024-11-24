#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct{ /* Como preciso ter um lugar para armazenar, também vou precisar colocar aqui a Struct. */
    int RA;
    char nome[30];
}Registros;



int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *arq = fopen("Registros.bin","rb");
    Registros regis;

    if(arq == NULL){
        printf("O arquivo nao abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }

    for(int i = 0; i <= 2; i++){
        fread(&regis, sizeof(Registros), 1, arq); /* Ler um registro especifico. */
    }


    printf("\n\nO registro especifico contem o nome: %s", regis.nome);
    printf("O registro especifico contem o RA: %d.\n", regis.RA);



fclose(arq);
return 0;
}
