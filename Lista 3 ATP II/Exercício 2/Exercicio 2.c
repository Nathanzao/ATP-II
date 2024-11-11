#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um carro (marca, modelo, ano) e imprima seus valores.
*/

typedef struct{ 
    char marca[30];
    char modelo[30];
    int ano;
}Marca;


int main (){
setlocale(LC_ALL, "Portuguese");
    Marca marca;

    printf("Digite a marca do carro: ");
    fgets(marca.marca, 30, stdin);
    fflush(stdin);

    printf("Digite o modelo do carro: ");
    fgets(marca.modelo, 30, stdin);

    printf("Digite o ano do carro: ");
    scanf("%d", &marca.ano);

    printf("\n\n\n\n");

    printf("A marca do carro eh %s. O modelo %s. Lancado em %d.", marca.marca, marca.modelo, marca.ano);
    


    printf("\n\n");
return 0;
}