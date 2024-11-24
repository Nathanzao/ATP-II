#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
um ponto (x, y, z) e imprima seus valores.
*/

typedef struct{
    int z;
}Z;


typedef struct{
    int x;
    int y;
    Z z;
}XY;

void imprimirStruct (XY variavel_aux){
    printf("X = %d.\n", variavel_aux.x);
    printf("Y = %d.\n", variavel_aux.y);
    printf("Z = %d.\n\n", variavel_aux.z.z);
}

int main (){
setlocale(LC_ALL, "Portuguese");
    XY pontosXY ={
        .x = 10,
        .y = 11,
        .z.z = 12
    };

    imprimirStruct(pontosXY);



return 0;
}
