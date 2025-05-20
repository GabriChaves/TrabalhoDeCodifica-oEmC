#include <stdio.h>

int main() {
    int idade, olhosAzuis = 0, cabelosLouros = 0, mulheres18a35Castanhos = 0;
    char sexo, corOlhos, corCabelos;

    for (int i = 0; i < 100; i++) { // pode ser enquanto a idade for válida também
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Olhos (A-azuis, V-verdes, C-castanhos): ");
        scanf(" %c", &corOlhos);
        printf("Cabelos (L-louros, C-castanhos, P-pretos): ");
        scanf(" %c", &corCabelos);
        printf("Idade: ");
        scanf("%d", &idade);

        if (corOlhos == 'A') olhosAzuis++;
        if (corCabelos == 'L') cabelosLouros++;
        if (sexo == 'F' && idade >= 18 && idade <= 35 && corOlhos == 'C' && corCabelos == 'C') {
            mulheres18a35Castanhos++;
        }
    }

    printf("Pessoas com olhos azuis: %d\n", olhosAzuis);
    printf("Pessoas com cabelos louros: %d\n", cabelosLouros);
    printf("Mulheres entre 18 e 35 anos com olhos e cabelos castanhos: %d\n", mulheres18a35Castanhos);

    return 0;
}
