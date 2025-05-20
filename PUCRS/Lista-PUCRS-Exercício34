#include <stdio.h>

int main() {
    int aluno, alunoMaisAlto, alunoMaisBaixo;
    float altura, maiorAltura = 0, menorAltura = 100;

    for (int i = 0; i < 5; i++) {
        printf("Número do aluno: ");
        scanf("%d", &aluno);
        printf("Altura do aluno: ");
        scanf("%f", &altura);

        if (altura > maiorAltura) {
            maiorAltura = altura;
            alunoMaisAlto = aluno;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
            alunoMaisBaixo = aluno;
        }
    }

    printf("Aluno mais alto: %d com altura %.2f\n", alunoMaisAlto, maiorAltura);
    printf("Aluno mais baixo: %d com altura %.2f\n", alunoMaisBaixo, menorAltura);
    return 0;
}
