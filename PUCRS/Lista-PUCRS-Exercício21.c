#include <stdio.h>

int main() {
    int num;
    long long produto = 1;
    int temPar = 0;

    while (1) {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);
        if (num == 0) break;

        if (num % 2 == 0) {
            produto *= num;
            temPar = 1;
        }
    }

    if (temPar)
        printf("Produto dos números pares: %lld\n", produto);
    else
        printf("Nenhum número par foi digitado.\n");

    return 0;
}
