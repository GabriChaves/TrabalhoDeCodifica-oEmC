int main() {
    int cod, qtd;
    float total;
    printf("Digite o codigo do item e a quantidade: ");
    scanf("%d %d", &cod, &qtd);
    if (cod == 100) total = 1.10 * qtd;
    else if (cod == 101) total = 1.30 * qtd;
    else if (cod == 102) total = 1.50 * qtd;
    else if (cod == 103) total = 1.10 * qtd;
    else if (cod == 104) total = 1.30 * qtd;
    else if (cod == 105) total = 1.00 * qtd;
    else {
        printf("Codigo invalido");
        return 0;
    }
    printf("Total: R$ %.2f", total);
    return 0;
}
