int main() {
    int cod, qtd;
    float preco;
    printf("Digite o codigo do produto e a quantidade: ");
    scanf("%d %d", &cod, &qtd);
    switch (cod) {
        case 1001: preco = 5.32; break;
        case 1324: preco = 6.45; break;
        case 6548: preco = 2.37; break;
        case 0987: preco = 5.32; break;
        case 7623: preco = 6.45; break;
        default: printf("Codigo invalido"); return 0;
    }
    printf("Total: R$ %.2f", preco * qtd);
    return 0;
}
