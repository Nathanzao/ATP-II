#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
funcion ́ario (nome, sal ́ario, departamento) e imprima o resultado.
*/

typedef struct{
    char nome[30];
    char departamento[30];
    int salario;
}Funci;


int main (){
setlocale(LC_ALL, "Portuguese");
    Funci funcionario;

    printf("O sizeof da Struct eh: %d.", sizeof(funcionario));

return 0;
}
