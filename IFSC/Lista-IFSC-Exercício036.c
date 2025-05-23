#include <stdio.h>

int main() {
    float venda, comissao;
    for (int i = 1; i <= 3; i++) {
        printf("Corretor %d - Valor da venda: ", i);
        scanf("%f", &venda);
        if (venda > 50000.0)
            comissao = venda * 0.12;
        else if (venda >= 30000.0)
            comissao = venda * 0.095;
        else
            comissao = venda * 0.07;
        printf("Comissao: R$ %.2f\n", comissao);
    }
    return 0;
}
