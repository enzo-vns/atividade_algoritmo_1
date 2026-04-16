#include <stdio.h>

int main() {
    int n, divisor, soma;

    printf("Numeros perfeitos entre 1 e 100:\n");

    for (n = 1; n <= 100; n++) {
        soma = 0;
        for (divisor = 1; divisor < n; divisor++) {
            if (n % divisor == 0)
                soma += divisor;
        }
        if (soma == n)
            printf("%d\n", n);
    }

    return 0;
}
