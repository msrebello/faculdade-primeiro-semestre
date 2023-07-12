#include <stdio.h>

int main()
{

    float C, P;

    printf("Digite o valor em polegadas: ");
    scanf("%f", &P);

    C = P * 2.54;

    printf("Em centimetros: %.2f", C);

    return 0;
}