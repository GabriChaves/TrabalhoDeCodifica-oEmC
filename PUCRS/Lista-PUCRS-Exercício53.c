#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int count = 0, num = 2;
    while (count < 20) {
        if (ehPrimo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
