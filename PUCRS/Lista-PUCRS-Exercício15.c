#include <stdio.h>

int main() {
    int valor;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    while (1) {
        printf("Digite um valor (negativo para parar): ");
        scanf("%d", &valor);
        if (valor < 0) break;

        if (valor <= 25)
            c1++;
        else if (valor <= 50)
            c2++;
        else if (valor <= 75)
            c3++;
        else if (valor <= 100)
            c4++;
    }

    printf("[0-25]: %d\n[26-50]: %d\n[51-75]: %d\n[76-100]: %d\n", c1, c2, c3, c4);
    return 0;
}
