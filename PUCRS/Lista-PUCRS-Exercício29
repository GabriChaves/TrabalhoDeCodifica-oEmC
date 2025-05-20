#include <stdio.h>

int main() {
    int num, contador = 0;
    float soma = 0;

    for (int i = 0; i < 10; i++) { // você pode mudar para quantos quiser
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num >= 13 && num <= 73) {
            soma += num;
            contador++;
        }
    }

    if (contador > 0)
        printf("Média: %.2f\n", soma / contador);
    else
        printf("Nenhum número no intervalo.\n");

    return 0;
}
