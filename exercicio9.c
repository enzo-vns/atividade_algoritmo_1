#include <stdio.h>

int main() {
    int i, j, soma = 0;

    printf("Pecas do domino e suas somas:\n\n");

    for (i = 0; i <= 6; i++) {
        for (j = i; j <= 6; j++) {
            printf("[%d|%d] = %d\n", i, j, i + j);
            soma += i + j;
        }
    }

    printf("\nSoma total de todos os numeros do domino: %d\n", soma);

    return 0;
}
