#include <stdio.h>
#include <string.h>

int main() {

    char nome1[100];
    char nome2[100];

    printf("Digite o primeiro nome -> ");
    fgets(nome1, 100, stdin);

    printf("Digite o segundo nome -> ");
    fgets(nome2, 100, stdin);

    tam_nome1 = strlen(nome1);
    tam_nome2 = strlen(nome2);

    print("O tamanho do nome 1 é %d e o tamanho do nome dois é %d", tam_nome1, tam_nome2);

    int comparacao = strcmp(nome1, nome2);
    if(comparacao == 0) {
        printf("Os nomes são iguais!\n")
    }
    else if(comparacao < 1) {
        prinf("O nome 1 é menor que o nome 2");
    }
    else {
        printf("O nome 1 é maior que o nome 2");
    }
}