#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("Digite A e B: ");
    scanf("%d %d", &A, &B);

    resultado = (A + B) * (A + B);

    printf("Quadrado da soma: %d\n", resultado);

    return 0;
}
