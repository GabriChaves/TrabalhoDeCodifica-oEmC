#include <stdio.h>

int main() {
    int n, i, j;

    for (i = 1; i <= 20; i++) {
        printf("Digite um número para ver a tabuada: ");
        scanf("%d", &n);

        printf("Tabuada do %d:\n", n);
        for (j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
        printf("\n");
    }

    return 0;
}
