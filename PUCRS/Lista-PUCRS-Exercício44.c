#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[10];
    char estado[3];
    int veiculos;
    int acidentes;
} Cidade;

int main() {
    Cidade cidades[200];
    int n, totalVeic = 0, totalAcidentesRS = 0, contRS = 0;
    float maiorIndice = 0, menorIndice = 1000000;
    char cidadeMaior[10], cidadeMenor[10];

    printf("Quantidade de cidades: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Codigo, Estado, Veiculos, Acidentes: ");
        scanf("%s %s %d %d", cidades[i].codigo, cidades[i].estado, &cidades[i].veiculos, &cidades[i].acidentes);

        float indice = (float)cidades[i].acidentes / cidades[i].veiculos;

        if (indice > maiorIndice) {
            maiorIndice = indice;
            strcpy(cidadeMaior, cidades[i].codigo);
        }

        if (indice < menorIndice) {
            menorIndice = indice;
            strcpy(cidadeMenor, cidades[i].codigo);
        }

        totalVeic += cidades[i].veiculos;

        if (strcmp(cidades[i].estado, "RS") == 0) {
            totalAcidentesRS += cidades[i].acidentes;
            contRS++;
        }
    }

    printf("Maior indice: %s\n", cidadeMaior);
    printf("Menor indice: %s\n", cidadeMenor);
    printf("Media de veiculos: %.2f\n", (float)totalVeic / n);
    printf("Media acidentes RS: %.2f\n", contRS ? (float)totalAcidentesRS / contRS : 0);

    return 0;
}
