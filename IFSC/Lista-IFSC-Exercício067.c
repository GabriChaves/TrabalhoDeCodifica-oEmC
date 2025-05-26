int main() {
    float salarioAtual, novoSalario;
    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);
    if (salarioAtual < 1500.00) novoSalario = salarioAtual * 1.12;
    else if (salarioAtual < 1750.00) novoSalario = salarioAtual * 1.10;
    else if (salarioAtual < 2000.00) novoSalario = salarioAtual * 1.08;
    else if (salarioAtual < 3000.00) novoSalario = salarioAtual * 1.07;
    else novoSalario = salarioAtual * 1.05;
    printf("Novo salario: R$ %.2f", novoSalario);
    return 0;
}
