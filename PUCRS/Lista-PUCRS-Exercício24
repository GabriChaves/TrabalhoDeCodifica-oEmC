#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, contador = 0, mulheresCondicao = 0;
    char sexo, olhos, cabelo;

    while (1) {
        printf("Idade (-1 para sair): ");
        scanf("%d", &idade);
        if (idade < 0) break;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Cor dos olhos (A-azul, V-verde, C-castanho): ");
        scanf(" %c", &olhos);
        printf("Cor do cabelo (L-louro, C-castanho, P-preto): ");
        scanf(" %c", &cabelo);

        if (idade > maiorIdade) maiorIdade = idade;

        if (sexo == 'F' && idade >= 18 && idade <= 35 && olhos == 'V' && cabelo == 'L') {
            mulheresCondicao++;
        }

        contador++;
    }

    printf("Maior idade dos habitantes: %d\n", maiorIdade);
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n", mulheresCondicao);
    return 0;
}
