#include <stdio.h>

int main() {
    int a, b;

    for (int i = 0; i < 5; i++) {
        printf("Digite dois valores (a b): ");
        scanf("%d %d", &a, &b);

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        printf("Números pares entre %d e %d:\n", a, b);
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0)
                printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
