#include <stdio.h>

int main() {
    int sexo, olhos, cabelos, idade;
    int maior = 0, cont = 0;

    for (int i = 0; i < 500; i++) {
        printf("Sexo (0=F,1=M), Olhos (0=A,1=V,2=C), Cabelos (0=L,1=C,2=P), Idade: ");
        scanf("%d %d %d %d", &sexo, &olhos, &cabelos, &idade);

        if (idade > maior)
            maior = idade;

        if (sexo == 0 && idade >= 18 && idade <= 35 && olhos == 1 && cabelos == 0)
            cont++;
    }

    printf("Maior idade: %d\n", maior);
    printf("Qtd mulheres 18-35 com olhos verdes e cabelos louros: %d\n", cont);

    return 0;
}
