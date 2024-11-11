#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Resolva um problema de cadastro de funcion ́arios utilizando estruturas.
*/

typedef struct{
    int idade;
    int salario;
    char nome[30];
}Funcionarios;

void imprimirStruct(Funcionarios variavel_aux, int quantidade){
    printf("\n\nFuncionario %d: \n\n", quantidade);

    printf("A idade do funcionario eh: %d\n", variavel_aux.idade);
    printf("O salario do funcionario eh: %d.\n", variavel_aux.salario);
    printf("O nome do funcionario eh: %s", variavel_aux.nome);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Funcionarios funci[2];

    for(int i = 0; i < 2; i++){
        if(i != 0){
            printf("\n\n");
        }

        printf("Digite a idade do funcionario %d: ", i+1);
        scanf("%d", &funci[i].idade);
        
        printf("Digite o salario do funcionario %d: ", i+1);
        scanf("%d", &funci[i].salario);
        fflush(stdin);

        printf("Digite o nome do funcionario %d: ", i+1);
        fgets(funci[i].nome, 30, stdin);
        fflush(stdin);

    }

    for(int i = 0; i < 2; i++){
        imprimirStruct(funci[i], i+1);
    }

return 0;
}
