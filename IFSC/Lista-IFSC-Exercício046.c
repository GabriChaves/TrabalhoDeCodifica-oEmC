int main() {
    int dias;
    float total;
    printf("Digite o número de diárias: ");
    scanf("%d", &dias);

    if (dias > 15)
        total = dias * 60 + dias * 5.5;
    else if (dias == 15)
        total = dias * 60 + dias * 6;
    else
        total = dias * 60 + dias * 8;

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
