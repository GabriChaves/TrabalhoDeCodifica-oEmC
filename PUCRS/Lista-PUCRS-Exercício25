#include <stdio.h>

int main() {
    int codigo;
    float preco, precoNovo, somaAntes = 0, somaDepois = 0;
    int contador = 0;

    do {
        printf("Código do produto (negativo para encerrar): ");
        scanf("%d", &codigo);
        if (codigo < 0) break;

        printf("Preço atual: ");
        scanf("%f", &preco);

        precoNovo = preco * 1.20;

        printf("Código: %d | Preço novo: R$%.2f\n", codigo, precoNovo);

        somaAntes += preco;
        somaDepois += precoNovo;
        contador++;
    } while (1);

    if (contador > 0) {
        printf("Média dos preços antes: R$%.2f\n", somaAntes / contador);
        printf("Média dos preços com aumento: R$%.2f\n", somaDepois / contador);
    }

    return 0;
}
