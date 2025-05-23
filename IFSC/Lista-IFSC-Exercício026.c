#include <stdio.h>

int main() {
    float salarioBruto, salarioLiquido;

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);

    salarioLiquido = salarioBruto * 0.9;         // 10% desconto INSS
    salarioLiquido = salarioLiquido * 0.95;      // 5% imposto sobre o restante

    printf("Salario liquido: %.2f\n", salarioLiquido);

    return 0;
}
