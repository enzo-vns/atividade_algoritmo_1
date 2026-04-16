#include <stdio.h>

int main() {
    float valor, soma = 0;
    int count = 0;

    printf("Digite valores positivos (valor negativo para encerrar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%f", &valor);

        if (valor < 0)
            break;

        soma += valor;
        count++;
    }

    if (count == 0)
        printf("\nNenhum valor positivo foi digitado.\n");
    else
        printf("\nMedia dos %d valores: %.2f\n", count, soma / count);

    return 0;
}
