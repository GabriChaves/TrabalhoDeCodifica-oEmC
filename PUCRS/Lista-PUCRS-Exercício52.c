#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    int n, p;
    printf("N P: ");
    scanf("%d %d", &n, &p);

    int combinacao = fatorial(n) / (fatorial(p) * fatorial(n - p));
    int arranjo = fatorial(n) / fatorial(n - p);

    printf("Combinacao: %d\n", combinacao);
    printf("Arranjo: %d\n", arranjo);
    return 0;
}
