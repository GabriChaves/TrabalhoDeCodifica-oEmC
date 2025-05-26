int main() {
    char cod[5];
    int qtd;
    float preco = 0;
    printf("Digite o codigo do produto e a quantidade: ");
    scanf("%s %d", cod, &qtd);
    if (strcmp(cod, "ABCD") == 0) preco = 5.00;
    else if (strcmp(cod, "XYPK") == 0) preco = 3.00;
    else if (strcmp(cod, "KLMP") == 0) preco = 2.50;
    else if (strcmp(cod, "QRST") == 0) preco = 4.30;
    else {
        printf("Codigo invalido");
        return 0;
    }
    printf("Total: R$ %.2f", preco * qtd);
    return 0;
}
