#include <stdio.h>

int main() {
    int numero, i, primo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    primo = 1;

    if (numero < 2) {
        primo = 0;
    } else {
        for (i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("%d e primo.\n", numero);
    else
        printf("%d nao e primo.\n", numero);

    return 0;
}
