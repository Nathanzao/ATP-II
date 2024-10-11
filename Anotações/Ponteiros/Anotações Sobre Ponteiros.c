#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
                                                    NOÇÕES PRELIMINARES
    &x = mostra o endereço de x;

    ponteiros tem endereço de memórias seguidos.

                                                    FORMAS DE USAR O PONTEIRO

    ptr = assume o endereço da outra variável. Dessa forma, é como se ptr tivesse se tornado a outra variável.
No próximo passo, quando formos alterar o conteúdo da variável qualquer, é como se estivessemos alterando diretamente ela.
Veja que se eu colocar ptr = ptr + 1, eu estarei indo ao próximo endereço que memória, pois ptr sozinho sem asteristico nem nada quer dizer
o endereço de memória.

    *ptr = quando colocamos um '*', tratamos do próprio conteúdo do endereço. Caso colocassemos um valor do outro lado da igualdade,
mudariamos o conteúdo do endereço que a etapa anterior assumiu. Ou seja, se tivesse uma variavel qualquer na etapa anterior, iriamos
alterar o conteúdo dela.

    &ptr =  iria ver o endereço do PRÓPRIO ponteiro. Não o endereço de uma variável, e sim o endereço do próprio ponteiro.

                                                    NA PRÁTICA

    ptr = &x; colocariamos no conteudo do ponteiro o endereco da variavel x. Tornando-o basicamente a propria variavel.

    *ptr = z;  mudariamos o valor de x para z. Ou, se usamos em um if, devemos colocar assim pois trataria do próprio conteúdo do endereço.



*/

int main (){
setlocale(LC_ALL, "Portuguese");
int *ponteiro, x = 5;
    printf("Valor de X antes de ser modificado pelo ponteiro: %d\n", x);
    ponteiro = &x;
    *ponteiro = 6;
    printf("Valor de X depois de modificá-lo pelo ponteiro: %d", x);

return 0;
}
