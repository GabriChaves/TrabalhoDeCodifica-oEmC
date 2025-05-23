#include <stdio.h>

int main() {
    float NumA, NumB, NumC, NumD, NumE, media;

    printf("Digite cinco valores: ");
    scanf("%f %f %f %f %f", &NumA, &NumB, &NumC, &NumD, &NumE);

    media = (NumA + NumB + NumC + NumD + NumE) / 5;

    printf("Media: %.2f\n", media);

    return 0;
}
