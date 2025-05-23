#include <stdio.h>

int main() {
    float F, C;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;

    printf("Temperatura em Celsius: %.2f\n", C);
    return 0;
}
