int main() {
    int a, b, c;
    printf("Digite três números: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b || a == c || b == c)
        printf("Existem números iguais\n");
    else {
        if (a > b) { int tmp = a; a = b; b = tmp; }
        if (a > c) { int tmp = a; a = c; c = tmp; }
        if (b > c) { int tmp = b; b = c; c = tmp; }
        printf("Ordem crescente: %d %d %d\n", a, b, c);
    }

    return 0;
}
