#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite os valores A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);
    if (A + B < C)
        printf("A soma de A e B eh menor que C\n");
    else if (A + B == C)
        printf("A soma de A e B eh igual a C\n");
    else
        printf("A soma de A e B eh maior que C\n");
    return 0;
}
