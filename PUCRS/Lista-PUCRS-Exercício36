#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 2; i <= n; i++)
        fat *= i;
    return fat;
}

int main() {
    int N, num;

    printf("Quantos números você quer digitar? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        printf("Fatorial de %d = %d\n", num, fatorial(num));
    }

    return 0;
}
