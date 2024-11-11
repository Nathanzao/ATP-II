#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar os dias da semana e
imprima os valores.
*/

enum diasSemanas{
    segunda = 1,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

enum diasSemanas imprimirEnum(enum diasSemanas dia){ /* Função recursiva para imprimir enum. */
    if(dia <= domingo){
        printf(" %d ", dia);
        return imprimirEnum(dia+1);
    }else{
        return 0;
    }
}


int main (){
setlocale(LC_ALL, "Portuguese");

    imprimirEnum(1);

return 0;
}