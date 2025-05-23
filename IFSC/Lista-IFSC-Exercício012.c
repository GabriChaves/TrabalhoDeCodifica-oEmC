#include <stdio.h>

int main() {
    float C, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("Temperatura em Fahrenheit: %.2f\n", F);
    return 0;
}
