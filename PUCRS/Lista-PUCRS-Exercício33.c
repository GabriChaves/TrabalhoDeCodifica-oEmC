#include <stdio.h>

int main() {
    int N;

    for (int i = 1; i <= 20; i++) {
        printf("Digite o valor N para o aluno %d: ", i);
        scanf("%d", &N);

        printf("Tabuada de %d:\n", N);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", j, N, j * N);
        }
        printf("\n");
    }

    return 0;
}
