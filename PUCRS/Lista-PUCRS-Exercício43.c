#include <stdio.h>

int main() {
    char grupos[5];
    int i, j;
    char temp;

    for(i = 0; i < 5; i++) {
        printf("Digite o %dº caractere (A, B, C ou D): ", i+1);
        scanf(" %c", &grupos[i]);
    }

    printf("Ordem lida: ");
    for(i = 0; i < 5; i++) {
        printf("%c ", grupos[i]);
    }

    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(grupos[i] < grupos[j]) {
                temp = grupos[i];
                grupos[i] = grupos[j];
                grupos[j] = temp;
            }
        }
    }

    printf("\nOrdem decrescente: ");
    for(i = 0; i < 5; i++) {
        printf("%c ", grupos[i]);
    }

    return 0;
}
