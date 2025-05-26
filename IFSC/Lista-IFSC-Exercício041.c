int main() {
    float comissao, vendas, salario_total;
    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);

    comissao = 50 + (vendas * 0.05);
    salario_total = comissao;

    printf("Salário total: %.2f\n", salario_total);

    return 0;
}
