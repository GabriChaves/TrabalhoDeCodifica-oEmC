int main() {
    int tipo;
    float preco, desconto, total;
    printf("Digite o tipo de peça (1-parafuso, 2-porca, 3-arruela): ");
    scanf("%d", &tipo);
    printf("Digite o preço unitário da peça: ");
    scanf("%f", &preco);

    if (tipo == 1)
        desconto = preco * 0.10;
    else if (tipo == 2)
        desconto = preco * 0.20;
    else
        desconto = preco * 0.30;

    total = preco - desconto;
    printf("Desconto: %.2f\nTotal a pagar: %.2f\n", desconto, total);

    return 0;
}
