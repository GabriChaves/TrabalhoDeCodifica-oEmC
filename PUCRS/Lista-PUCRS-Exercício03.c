#include <stdio.h>

int main() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0, pessoas = 0, ate100 = 0;

    while (1) {
        printf("Digite o salário (negativo para sair): ");
        scanf("%f", &salario);
        if (salario < 0) break;

        printf("Digite o número de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        pessoas++;

        if (salario > maiorSalario)
            maiorSalario = salario;
        if (salario <= 100)
            ate100++;
    }

    if (pessoas > 0) {
        printf("Média salarial: %.2f\n", somaSalario / pessoas);
        printf("Média de filhos: %.2f\n", (float)somaFilhos / pessoas);
        printf("Maior salário: %.2f\n", maiorSalario);
        printf("Percentual com salário até R$100: %.2f%%\n", (ate100 * 100.0) / pessoas);
    } else {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}
