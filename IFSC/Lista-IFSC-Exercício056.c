int main() {
    int a, b, c;
    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) printf("%d eh o maior", a);
    else if (b > c) printf("%d eh o maior", b);
    else printf("%d eh o maior", c);
    return 0;
}
