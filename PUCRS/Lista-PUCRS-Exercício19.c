#include <stdio.h>

int main() {
    int num, pares = 0, total = 0;
    float somaPares = 0, somaTotal = 0;

    while (1) {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);
        if (num == 0) break;

        somaTotal += num;
        total++;

        if (num % 2 == 0) {
            somaPares += num;
            pares++;
        }
    }

    if (total > 0) {
        printf("Média geral: %.2f\n", somaTotal / total);
        if (pares > 0)
            printf("Média dos pares: %.2f\n", somaPares / pares);
    }

    return 0;
}
