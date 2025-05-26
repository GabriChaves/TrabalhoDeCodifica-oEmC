int main() {
    int codigo;
    float n1, n2, n3, media;
    printf("Digite o codigo e tres notas: ");
    scanf("%d %f %f %f", &codigo, &n1, &n2, &n3);
    media = (n1 * 4 + n2 + n3) / 6;
    printf("Codigo: %d\nMedia: %.2f\n", codigo, media);
    if (media >= 5) printf("APROVADO");
    else printf("REPROVADO");
    return 0;
}
