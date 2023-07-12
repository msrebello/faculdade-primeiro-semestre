#include <stdio.h>

int main()
{

    float K, C;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &K);

    C = K - 273.15;

    printf("Conversao para Celsius %.2f", C);

    return 0;
}