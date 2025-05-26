int main() {
    float n1, n2, n3, media;
    int tipo;
    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Tipo de media (1 = aritmetica, 2 = ponderada): ");
    scanf("%d", &tipo);
    if (tipo == 1) media = (n1 + n2 + n3) / 3;
    else if (tipo == 2) media = (n1*3 + n2*4 + n3*5) / (3+4+5);
    else {
        printf("Tipo invalido");
        return 0;
    }
    printf("Media = %.2f", media);
    return 0;
}
