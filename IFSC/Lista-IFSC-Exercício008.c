#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Área do triângulo: %.2f\n", area);
    return 0;
}
