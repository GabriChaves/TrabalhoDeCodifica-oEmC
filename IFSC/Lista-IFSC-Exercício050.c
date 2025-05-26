int main() {
    int nota;
    printf("Digite a nota do aluno (0 a 100): ");
    scanf("%d", &nota);

    if (nota <= 39)
        printf("Conceito: Insuficiente\n");
    else if (nota <= 64)
        printf("Conceito: Regular\n");
    else if (nota <= 84)
        printf("Conceito: Bom\n");
    else
        printf("Conceito: Ótimo\n");

    return 0;
}
