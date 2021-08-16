#include <stdio.h>
#include <math.h>

int main(void) {
    int x = 0;
    int i;

    printf("Olá Fulano, iremos calcular 10 pontos da função abaixo ");
    printf("f(x) = x + 1\n");

    printf("Digite o X inicial: ");
    scanf("%d", &x);

    for(i = x; i < x+10; i = i + 1) {
        if(i % 2 == 0) {
            printf("%d %d \n", i, i+1) );
        }
    }

    return 0;
}