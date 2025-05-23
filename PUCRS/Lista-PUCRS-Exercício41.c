#include <stdio.h>

int main() {
    float n1, n2, n3, media, soma = 0;
    int i;

    for (i = 0; i < 50; i++) {
        printf("Notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1*2 + n2*4 + n3*3) / 10;
        soma += media;

        printf("Média: %.2f - %s\n", media, media >= 7 ? "Aprovado" : "Reprovado");
    }

    printf("Média geral da turma: %.2f\n", soma / 50);
    return 0;
}
