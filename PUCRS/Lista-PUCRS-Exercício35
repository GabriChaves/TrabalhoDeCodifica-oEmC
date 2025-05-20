#include <stdio.h>

int main() {
    int sexo, maiorSexo, menorSexo;
    float altura, maior = 0, menor = 100, somaMulheres = 0, somaTotal = 0;
    int qtdMulheres = 0;

    for (int i = 0; i < 50; i++) {
        printf("Sexo (1-M, 2-F): ");
        scanf("%d", &sexo);
        printf("Altura: ");
        scanf("%f", &altura);

        if (altura > maior) {
            maior = altura;
            maiorSexo = sexo;
        }
        if (altura < menor) {
            menor = altura;
            menorSexo = sexo;
        }

        somaTotal += altura;

        if (sexo == 2) {
            somaMulheres += altura;
            qtdMulheres++;
        }
    }

    printf("Maior altura: %.2f (%s)\n", maior, maiorSexo == 1 ? "Masculino" : "Feminino");
    printf("Menor altura: %.2f (%s)\n", menor, menorSexo == 1 ? "Masculino" : "Feminino");
    printf("Média da altura das mulheres: %.2f\n", qtdMulheres ? somaMulheres / qtdMulheres : 0);
    printf("Média da altura da turma: %.2f\n", somaTotal / 50);
    return 0;
}
