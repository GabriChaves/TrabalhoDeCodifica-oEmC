#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, maior, media;

    while (1) {
        printf("Digite o código do aluno (negativo para encerrar): ");
        scanf("%d", &codigo);
        if (codigo < 0) break;

        printf("Digite as 3 notas do aluno: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        maior = n1;
        if (n2 > maior) maior = n2;
        if (n3 > maior) maior = n3;

        if (maior == n1)
            media = (n1*4 + n2*3 + n3*3) / 10;
        else if (maior == n2)
            media = (n1*3 + n2*4 + n3*3) / 10;
        else
            media = (n1*3 + n2*3 + n3*4) / 10;

        printf("Código: %d | Média: %.2f | %s\n", codigo, media,
               media >= 5 ? "APROVADO" : "REPROVADO");
    }

    return 0;
}
