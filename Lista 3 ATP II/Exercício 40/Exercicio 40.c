#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Acesse os componentes de uma estrutura de ponto (x, y, z) utilizando o operador
ponto ‘.’ e imprima seus valores.
*/

typedef struct{
    int x;
    int y;
    int z;
}XYZ;

void imprimeStruct(XYZ variavel_aux){
    printf("X: %d.\n", variavel_aux.x);
    printf("Y: %d.\n", variavel_aux.y);
    printf("Z: %d.\n", variavel_aux.z);
}

int main (){
setlocale(LC_ALL, "Portuguese");
    XYZ pontos = {
        .x = 1,
        .y = 2,
        .z = 3
    };

    imprimeStruct(pontos);

return 0;
}
