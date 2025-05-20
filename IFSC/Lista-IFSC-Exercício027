#include <stdio.h>

int main() {
    int codigo, A, B, C, D, E, digito;

    printf("Digite um codigo de 5 algarismos: ");
    scanf("%d", &codigo);

    A = codigo / 10000;
    B = (codigo / 1000) % 10;
    C = (codigo / 100) % 10;
    D = (codigo / 10) % 10;
    E = codigo % 10;

    digito = (6*A + 5*B + 4*C + 3*D + 2*E) % 7;

    printf("Digito verificador: %d\n", digito);

    return 0;
}
