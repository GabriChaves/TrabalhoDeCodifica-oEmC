#include <stdio.h>

int main() {
    char nome[50];
    float valor, bonus;

    for (int i = 0; i < 150; i++) {
        printf("Nome e valor de compras: ");
        scanf("%s %f", nome, &valor);

        if (valor < 500000)
            bonus = valor * 0.10;
        else
            bonus = valor * 0.15;

        printf("%s recebera bonus de %.2f\n", nome, bonus);
    }

    return 0;
}
