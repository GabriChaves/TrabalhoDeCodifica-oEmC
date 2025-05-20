#include <stdio.h>

int main() {
    int valor, soma = 0, count = 0;

    printf("Digite valores positivos (negativo para encerrar):\n");
    while (1) {
        scanf("%d", &valor);
        if (valor < 0)
            break;
        soma += valor;
        count++;
    }

    if (count > 0)
        printf("Média dos valores: %.2f\n", (float)soma / count);
    else
        printf("Nenhum valor positivo inserido.\n");

    return 0;
}
