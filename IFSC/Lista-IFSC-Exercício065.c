int main() {
    float n1, n2;
    printf("Digite duas notas: ");
    scanf("%f %f", &n1, &n2);
    float media = (n1 + n2) / 2;
    if (media >= 5) printf("Aprovado");
    else printf("Reprovado");
    return 0;
}
