#include <stdio.h>

int main() {
    int anos, dias;
    printf("Digite sua idade: ");
    scanf("%d", &anos);
    dias = anos * 365;
    printf("Dias vividos: %d\n", dias);
    return 0;
}
