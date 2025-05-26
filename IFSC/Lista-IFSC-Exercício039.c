int main() {
    int valor, troco, n100, n10, n1;
    printf("Digite o valor do troco: ");
    scanf("%d", &troco);

    n100 = troco / 100;
    troco %= 100;
    n10 = troco / 10;
    troco %= 10;
    n1 = troco;

    printf("Notas de 100: %d\n", n100);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 1: %d\n", n1);

    return 0;
}
