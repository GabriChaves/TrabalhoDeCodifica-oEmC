#include <stdio.h>

int main() {
    int n, m, i;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &m);

        if (m % 2 == 0) {
            printf("Divisores de %d: ", m);
            for (int j = 1; j <= m; j++) {
                if (m % j == 0)
                    printf("%d ", j);
            }
            printf("\n");
        } else if (m < 10) {
            int fat = 1;
            for (int j = 1; j <= m; j++)
                fat *= j;
            printf("Fatorial de %d: %d\n", m, fat);
        } else {
            printf("Raiz quadrada de %d: %.2f\n", m, sqrt(m));
        }
    }

    return 0;
}
