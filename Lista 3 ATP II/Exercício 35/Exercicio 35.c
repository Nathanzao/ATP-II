#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar as esta ̧c ̃oes do ano e
imprima os valores.
*/

typedef enum{
    verao = 1,
    inverno,
    outono,
    primavera
}Estac;

void imprimirEnum(Estac variavel_auxi){
    switch (variavel_auxi) {
        case verao:
            printf("Verão\n");
            break;
        case inverno:
            printf("Inverno\n");
            break;
        case outono:
            printf("Outono\n");
            break;
        case primavera:
            printf("Primavera\n");
            break;
        default:
            printf("Estação inválida\n");
    }
}

int main (){
setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i < 5; i++){
        imprimirEnum(i);
    }

return 0;
}
