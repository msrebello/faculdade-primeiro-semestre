#include <stdio.h>

int main()
{

    float M, L;

    printf("Digite o valor em litros: ");
    scanf("%f", &L);

    M = L / 1000;

    printf("Em metros cubicos: %.2f", M);

    return 0;
}