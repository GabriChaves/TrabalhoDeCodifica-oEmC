#include <stdio.h>
#include <math.h>

int main() {
    int contador = 0, valor;

    while (1) {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &valor);
        if (valor < 0) break;

        printf("Valor: %d | Quadrado: %d | Cubo: %d | Raiz Quadrada: %.2f\n", 
               valor, valor * valor, valor * valor * valor, sqrt(valor));
        contador++;

        if (contador % 20 == 0) {
            printf("---- 20 linhas impressas ----\n");
        }
    }

    return 0;
}
