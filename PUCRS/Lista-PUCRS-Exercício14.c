#include <stdio.h>

int main() {
    int n, i, valor;
    int positivos = 0, negativos = 0, total = 0;
    float soma = 0;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        soma += valor;

        if (valor >= 0)
            positivos++;
        else
            negativos++;

        total++;
    }

    printf("Média: %.2f\n", soma / total);
    printf("Positivos: %d (%.2f%%)\n", positivos, (float)positivos / total * 100);
    printf("Negativos: %d (%.2f%%)\n", negativos, (float)negativos / total * 100);

    return 0;
}
