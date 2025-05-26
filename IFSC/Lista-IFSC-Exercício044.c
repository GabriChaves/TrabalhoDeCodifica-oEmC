int main() {
    int tipo1, tipo2, tipo3;
    float total;
    printf("Quantidade de picolés do tipo 1: ");
    scanf("%d", &tipo1);
    printf("Quantidade de picolés do tipo 2: ");
    scanf("%d", &tipo2);
    printf("Quantidade de picolés do tipo 3: ");
    scanf("%d", &tipo3);

    total = tipo1 * 0.5 + tipo2 * 0.75 + tipo3 * 1.0;
    printf("Total arrecadado: R$ %.2f\n", total);

    return 0;
}
