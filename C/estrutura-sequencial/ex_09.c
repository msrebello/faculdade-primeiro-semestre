#include <stdio.h>

int main()
{

    float C, K;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    K = C + 273.15;

    printf("Conversao para Kelvin %.2f", K);

    return 0;
}