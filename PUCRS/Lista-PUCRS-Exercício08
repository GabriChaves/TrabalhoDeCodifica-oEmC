#include <stdio.h>

int main() {
    int num, soma = 0, count = 0;

    printf("Digite números (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        if (num % 2 == 0) {
            soma += num;
            count++;
        }
    }

    if (count > 0)
        printf("Média dos números pares: %.2f\n", (float)soma / count);
    else
        printf("Nenhum número par inserido.\n");

    return 0;
}
