int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("Par\n");
    else printf("Impar\n");
    if (n >= 0) printf("Positivo");
    else printf("Negativo");
    return 0;
}
