#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 2; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    int m, valor;

    printf("Quantos valores deseja informar? ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        int soma = valor * (valor + 1) / 2;
        printf("Valor: %d | Somatório: %d | Fatorial: %d\n", valor, soma, fatorial(valor));
    }

    return 0;
}
