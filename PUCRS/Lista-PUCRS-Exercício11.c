#include <stdio.h>

int main() {
    int n, a1, r, i, termo, soma = 0;

    printf("Digite o número de termos (n), o primeiro termo (a1) e a razão (r): ");
    scanf("%d %d %d", &n, &a1, &r);

    printf("Progressão: ");
    for (i = 0; i < n; i++) {
        termo = a1 + i * r;
        printf("%d ", termo);
        soma += termo;
    }

    printf("\nSoma dos termos: %d\n", soma);
    return 0;
}
