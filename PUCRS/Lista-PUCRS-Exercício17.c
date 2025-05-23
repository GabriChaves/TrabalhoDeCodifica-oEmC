#include <stdio.h>

int main() {
    int m, n, i, soma = 0;

    printf("Digite dois números (m e n): ");
    scanf("%d %d", &m, &n);

    for (i = 0; i < n; i++) {
        soma += m + i;
    }

    printf("Soma de %d números consecutivos a partir de %d é: %d\n", n, m, soma);
    return 0;
}
