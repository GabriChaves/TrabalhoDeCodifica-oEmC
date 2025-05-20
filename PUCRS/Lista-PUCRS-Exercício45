#include <stdio.h>

int main() {
    int sexo, idade, cont = 0, soma = 0, somaH = 0, somaM = 0, qtdH = 0, qtdM = 0, qtd18_35 = 0;

    do {
        printf("Sexo (0=fem, 1=masc), Idade: ");
        scanf("%d %d", &sexo, &idade);

        soma += idade;
        if (sexo == 0) { somaM += idade; qtdM++; }
        else { somaH += idade; qtdH++; }
        if (idade >= 18 && idade <= 35) qtd18_35++;

        cont++;
    } while (cont < 1000);

    printf("Media idade grupo: %.2f\n", soma / 1000.0);
    printf("Media mulheres: %.2f\n", qtdM ? somaM / (float)qtdM : 0);
    printf("Media homens: %.2f\n", qtdH ? somaH / (float)qtdH : 0);
    printf("%% entre 18-35: %.2f%%\n", (qtd18_35 / 1000.0) * 100);

    return 0;
}
