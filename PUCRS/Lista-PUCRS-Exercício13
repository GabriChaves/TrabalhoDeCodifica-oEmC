#include <stdio.h>

int main() {
    int n, i, j, fat;

    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int valor;
        printf("Digite um número: ");
        scanf("%d", &valor);

        fat = 1;
        for (j = 1; j <= valor; j++) {
            fat *= j;
        }

        printf("Valor: %d | Fatorial: %d\n", valor, fat);
    }

    return 0;
}
