#include <stdio.h>

int main() {
    int d1, m1, a1, d2, m2, a2;
    printf("Data 1 (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);
    printf("Data 2 (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    int dias1 = a1*365 + m1*30 + d1;
    int dias2 = a2*365 + m2*30 + d2;

    printf("Diferenca em dias: %d\n", dias1 > dias2 ? dias1 - dias2 : dias2 - dias1);
    return 0;
}
