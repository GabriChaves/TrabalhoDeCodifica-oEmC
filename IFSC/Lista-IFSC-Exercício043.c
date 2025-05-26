int main() {
    char nome[50], categoria;
    float salario, novo_salario;

    printf("Nome: ");
    scanf("%s", nome);
    printf("Categoria (A-Z): ");
    scanf(" %c", &categoria);
    printf("Salário: ");
    scanf("%f", &salario);

    if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'E' || categoria == 'H')
        novo_salario = salario * 1.10;
    else if (categoria == 'B' || categoria == 'D' || categoria == 'I' || categoria == 'J')
        novo_salario = salario * 1.15;
    else if (categoria == 'K' || categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'P' || categoria == 'Q' || categoria == 'S')
        novo_salario = salario * 1.35;
    else if (categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z')
        novo_salario = salario * 1.50;
    else
        novo_salario = salario;

    printf("%s - Categoria: %c - Novo salário: %.2f\n", nome, categoria, novo_salario);

    return 0;
}
