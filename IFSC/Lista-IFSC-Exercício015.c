#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    printf("Informe o tempo da viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Informe a velocidade media (em km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("Litros utilizados: %.2f\n", litros);

    return 0;
}
