#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    int n;
    printf("Digite N: ");
    scanf("%d", &n);
    printf("Fatorial: %d\n", fatorial(n));
    return 0;
}
