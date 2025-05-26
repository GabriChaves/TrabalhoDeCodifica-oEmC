int main() {
    int opcao, num1, num2, num3;
    printf("Digite a opcao (1, 2, 3 ou 4): ");
    scanf("%d", &opcao);
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (opcao == 1) printf("%d", num1);
    else if (opcao == 2) printf("%d", num2);
    else if (opcao == 3) printf("%d", num3);
    else printf("Opcao invalida");
    return 0;
}
