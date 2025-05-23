#include <stdio.h>

int main() {
    int matricula, letra1, letra2, num;

    printf("Digite o numero de matricula no formato AASSDD: ");
    scanf("%d", &matricula);

    letra1 = matricula / 100000;
    letra2 = (matricula / 10000) % 10;
    num = matricula % 10000;

    printf("Letra 1: %c\n", 'A' + letra1);
    printf("Letra 2: %c\n", 'A' + letra2);
    printf("Numero: %d\n", num);

    return 0;
}
