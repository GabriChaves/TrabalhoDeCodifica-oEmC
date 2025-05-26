int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (a < b) printf("Menor: %d\nMaior: %d", a, b);
    else printf("Menor: %d\nMaior: %d", b, a);
    return 0;
}
