#include <stdio.h>

int main() {
    float raio, altura, volume;
    const float PI = 3.14159;

    printf("Digite o raio da lata: ");
    scanf("%f", &raio);
    printf("Digite a altura da lata: ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("Volume da lata de óleo: %.2f\n", volume);
    return 0;
}
