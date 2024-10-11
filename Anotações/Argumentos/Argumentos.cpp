#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                    INTRODU��O:
Os argumentos servem para executar programas atrav�s do terminal. S�o declarados par�metros pelo terminal
que s�o armazenados nas vari�veis argc e **argv. Eles s�o colocados na fun��o main.
Por fim, os nomes dos arquivos, para serem consultados em PROMPT, n�o podem ter espa�os.

                                    ARGC:
� a quantidade de par�metros informados no terminal. � declarada como int e por padr�o a primeira posi��o
� o nome do pr�prio arquivo. Portanto, se for fazer opera��es com argc, n�o use na posi��o zero (veja que ela
vale um valor, ent�o na hora de calcular a quantidade de elementos passados, tamb�m vai contar o nome do arquivo).
� um vetor.

                                    ARGV:
� onde armazena-se as coisas que foram passadas no terminal. Veja que � do tipo **CHAR, ent�o para
fazer opera��es matem�ticas com o argumento, precisa-se passar os valores para inteiro primeiramente, por exemplo.

                                    PROMPT:
Para dar os comandos, v� at� a pasta onde est� o arquivo e escreva CMD na parte de endere�os da pasta.
L�, insira os comandos.
*/

int main (int argc, char **argv){
setlocale(LC_ALL, "Portuguese");

    printf("Argumento: %s", argv[1]);// imprimindo o primeiro par�metro passado.
    printf("\nQuantidades de argumentos: %d", argc); // imprimindo a quantidade de par�metros passados, contando o nome do arquivo.

    if(argc > 1){ // verificando se foram passados par�metros. Se for s� um, � s� o nome do programa.
        printf("Foram passados par�metros.");
    }

return 0;
}
