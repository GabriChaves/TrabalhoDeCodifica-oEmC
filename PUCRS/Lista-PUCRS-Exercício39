#include <stdio.h>

int somaDivisores(int n) {
    int soma = 1;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) soma += i;
    return soma;
}

int main() {
    int count = 0, num = 2;

    while (count < 5) {
        if (somaDivisores(num) == num) {
            printf("Número perfeito: %d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}
