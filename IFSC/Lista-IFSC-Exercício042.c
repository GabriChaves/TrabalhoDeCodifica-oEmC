int main() {
    char nome[50];
    float preco, desconto, preco_final;
    int i, qtd;

    printf("Quantos artigos? ");
    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++) {
        printf("Nome do artigo: ");
        scanf("%s", nome);
        printf("Preço: ");
        scanf("%f", &preco);
        printf("Desconto (%%): ");
        scanf("%f", &desconto);
        preco_final = preco - (preco * desconto / 100);
        printf("%s - Preço com desconto: %.2f\n", nome, preco_final);
    }

    return 0;
}
