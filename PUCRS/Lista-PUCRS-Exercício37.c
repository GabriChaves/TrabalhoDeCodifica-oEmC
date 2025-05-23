#include <stdio.h>

int main() {
    int valor, contador = 0;

    printf("Digite o valor de X: ");
    scanf("%d", &valor);

    for (int i = 1; contador < 20; i++) {
        for (int j = 0; j < i && contador < 20; j++) {
            printf("%d ", valor);
            contador++;
        }
        printf("\n");
    }

    return 0;
}
