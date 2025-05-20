#include <stdio.h>

int main() {
    int idade, total = 0, mulheres = 0;
    float salario, somaSalario = 0, maiorIdade = 0, menorIdade = 999;
    char sexo;

    while (1) {
        printf("Digite a idade (-1 para sair): ");
        scanf("%d", &idade);
        if (idade < 0) break;

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite o salário: ");
        scanf("%f", &salario);

        somaSalario += salario;
        total++;

        if (idade > maiorIdade) maiorIdade = idade;
        if (idade < menorIdade) menorIdade = idade;
        if (sexo == 'F' && salario <= 100) mulheres++;
    }

    if (total > 0) {
        printf("Média salarial: %.2f\n", somaSalario / total);
        printf("Maior idade: %.0f, Menor idade: %.0f\n", maiorIdade, menorIdade);
        printf("Mulheres com salário até R$100,00: %d\n", mulheres);
    }

    return 0;
}
