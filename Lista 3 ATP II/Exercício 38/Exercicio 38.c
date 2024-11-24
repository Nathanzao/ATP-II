#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um contato (nome, telefone, email) e
imprima seus valores.
*/

typedef struct{
    char nome[30];
    char emai[30];
    int telefone;
}Cont;

void imprimirStruct(Cont variavel_aux){
    printf("O nome do contato eh: %s.\n", variavel_aux.nome);
    printf("O email do contato eh: %s.\n", variavel_aux.emai);
    printf("O telefone do contato eh: %d.\n", variavel_aux.telefone);
}

int main (){
setlocale(LC_ALL, "Portuguese");
    Cont contatos = {
        .emai = "nathansilveira2104@gmail.com",
        .nome = "Nathan",
        .telefone = 1111
    };

    imprimirStruct(contatos);

return 0;
}
