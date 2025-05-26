int main() {
    float saldo, credito;
    printf("Digite o saldo medio: ");
    scanf("%f", &saldo);
    if (saldo <= 200) credito = 0;
    else if (saldo <= 400) credito = saldo * 0.2;
    else if (saldo <= 600) credito = saldo * 0.3;
    else credito = saldo * 0.4;
    printf("Saldo medio: R$ %.2f\nCredito: R$ %.2f", saldo, credito);
    return 0;
}
