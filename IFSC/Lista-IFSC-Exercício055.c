int main() {
    float n1, n2, n3, media;
    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    if (media == 7) printf("Aprovado com media final");
    else if (media > 7) printf("Aprovado");
    else printf("Reprovado");
    return 0;
}
