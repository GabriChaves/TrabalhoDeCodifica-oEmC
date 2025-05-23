#include <stdio.h>

int main() {
    int x, y, pot = 1;
    printf("X Y: ");
    scanf("%d %d", &x, &y);

    for (int i = 0; i < y; i++)
        pot *= x;

    printf("X^Y = %d\n", pot);
    return 0;
}
