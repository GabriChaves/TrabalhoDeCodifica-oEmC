#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int nulo = 0, branco = 0;

    printf("Digite os votos (0 para encerrar):\n");
    while (1) {
        scanf("%d", &voto);
        if (voto == 0) break;

        switch (voto) {
            case 1: candidato1++; break;
            case 2: candidato2++; break;
            case 3: candidato3++; break;
            case 4: candidato4++; break;
            case 5: nulo++; break;
            case 6: branco++; break;
            default: printf("Código inválido!\n");
        }
    }

    printf("\nResultado da votação:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", branco);

    return 0;
}
