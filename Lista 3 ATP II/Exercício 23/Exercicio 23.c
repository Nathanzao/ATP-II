#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar os meses do ano e
imprima os valores.
*/

enum Ano{
    janeiro = 1,
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    outubro,
    novembro,
    dezembro
};

enum Ano imprimirEnum(enum Ano mes){ /* Eu poderia imprimir com VOID, mas como fiz com recursão farei assim. */
    if(mes <= dezembro){
        printf(" %d ", mes);
        return imprimirEnum(mes+1);
    }else{
        return 0;
    }
}

int main (){
setlocale(LC_ALL, "Portuguese");

    imprimirEnum(1);

return 0;
}
