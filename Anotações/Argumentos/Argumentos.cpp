#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                    INTRODUÇÃO:
Os argumentos servem para executar programas através do terminal. São declarados parâmetros pelo terminal
que são armazenados nas variáveis argc e **argv. Eles são colocados na função main.
Por fim, os nomes dos arquivos, para serem consultados em PROMPT, não podem ter espaços.

                                    ARGC:
É a quantidade de parâmetros informados no terminal. É declarada como int e por padrão a primeira posição
é o nome do próprio arquivo. Portanto, se for fazer operações com argc, não use na posição zero (veja que ela
vale um valor, então na hora de calcular a quantidade de elementos passados, também vai contar o nome do arquivo).
É um vetor.

                                    ARGV:
É onde armazena-se as coisas que foram passadas no terminal. Veja que é do tipo **CHAR, então para
fazer operações matemáticas com o argumento, precisa-se passar os valores para inteiro primeiramente, por exemplo.

                                    PROMPT:
Para dar os comandos, vá até a pasta onde está o arquivo e escreva CMD na parte de endereços da pasta.
Lá, insira os comandos.
*/

int main (int argc, char **argv){
setlocale(LC_ALL, "Portuguese");

    printf("Argumento: %s", argv[1]);// imprimindo o primeiro parâmetro passado.
    printf("\nQuantidades de argumentos: %d", argc); // imprimindo a quantidade de parâmetros passados, contando o nome do arquivo.

    if(argc > 1){ // verificando se foram passados parâmetros. Se for só um, é só o nome do programa.
        printf("Foram passados parâmetros.");
    }

return 0;
}
