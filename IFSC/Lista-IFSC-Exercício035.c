#include <stdio.h>

int main() {
    char nome[50];
    float p, m, g, media;
    printf("Digite o nome do candidato: ");
    scanf(" %[^\n]", nome);
    printf("Notas (Portugues, Matematica, Conhecimentos Gerais): ");
    scanf("%f %f %f", &p, &m, &g);

    media = (p + m + g) / 3;
    printf("Candidato: %s\n", nome);
    printf("Notas: %.1f %.1f %.1f\n", p, m, g);
    printf("Media: %.2f\n", media);

    if (media > 7.0 && p >= 5.0 && m >= 5.0 && g >= 5.0)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
