int main() {
    int a, b, c;
    printf("Digite três números: ");
    scanf("%d%d%d", &a, &b, &c);

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    printf("Menor número: %d\n", menor);
    return 0;
}
