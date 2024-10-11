#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
                                                    NO��ES PRELIMINARES
    &x = mostra o endere�o de x;

    ponteiros tem endere�o de mem�rias seguidos.

                                                    FORMAS DE USAR O PONTEIRO

    ptr = assume o endere�o da outra vari�vel. Dessa forma, � como se ptr tivesse se tornado a outra vari�vel.
No pr�ximo passo, quando formos alterar o conte�do da vari�vel qualquer, � como se estivessemos alterando diretamente ela.
Veja que se eu colocar ptr = ptr + 1, eu estarei indo ao pr�ximo endere�o que mem�ria, pois ptr sozinho sem asteristico nem nada quer dizer
o endere�o de mem�ria.

    *ptr = quando colocamos um '*', tratamos do pr�prio conte�do do endere�o. Caso colocassemos um valor do outro lado da igualdade,
mudariamos o conte�do do endere�o que a etapa anterior assumiu. Ou seja, se tivesse uma variavel qualquer na etapa anterior, iriamos
alterar o conte�do dela.

    &ptr =  iria ver o endere�o do PR�PRIO ponteiro. N�o o endere�o de uma vari�vel, e sim o endere�o do pr�prio ponteiro.

                                                    NA PR�TICA

    ptr = &x; colocariamos no conteudo do ponteiro o endereco da variavel x. Tornando-o basicamente a propria variavel.

    *ptr = z;  mudariamos o valor de x para z. Ou, se usamos em um if, devemos colocar assim pois trataria do pr�prio conte�do do endere�o.



*/

int main (){
setlocale(LC_ALL, "Portuguese");
int *ponteiro, x = 5;
    printf("Valor de X antes de ser modificado pelo ponteiro: %d\n", x);
    ponteiro = &x;
    *ponteiro = 6;
    printf("Valor de X depois de modific�-lo pelo ponteiro: %d", x);

return 0;
}
