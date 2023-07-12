#include <stdio.h>

int main()
{

    float K, L;

    printf("Digite o valor em libras: ");
    scanf("%f", &L);

    K = L * 0.45;

    printf("Massa em Kg: %.2f", K);

    return 0;
}