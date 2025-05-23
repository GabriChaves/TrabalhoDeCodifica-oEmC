#include <stdio.h>

int main() {
    int data, dia, mes, ano, novaData;

    printf("Digite a data no formato DDMMAA: ");
    scanf("%d", &data);

    dia = data / 10000;
    mes = (data / 100) % 100;
    ano = data % 100;

    novaData = ano * 10000 + mes * 100 + dia;

    printf("Data no formato AAMMDD: %d\n", novaData);

    return 0;
}
