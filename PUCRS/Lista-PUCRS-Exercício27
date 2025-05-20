#include <stdio.h>

int main() {
    int num, maior, menor;
    float soma = 0;

    for (int i = 0; i < 500; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        if (i == 0) {
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        soma += num;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", soma / 500);
    return 0;
}
