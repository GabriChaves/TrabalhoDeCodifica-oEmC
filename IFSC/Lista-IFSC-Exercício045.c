int main() {
    int tipo;
    float saldo = 0, valor;

    printf("Digite o tipo de operação (1-depósito / 2-retirada): ");
    scanf("%d", &tipo);
    printf("Digite o valor: ");
    scanf("%f", &valor);

    if (tipo == 1)
        saldo += valor;
    else if (tipo == 2)
        saldo -= valor;

    printf("Saldo final: %.2f\n", saldo);
    if (saldo < 0)
        printf("Conta estourada\n");

    return 0;
}
