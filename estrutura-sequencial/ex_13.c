#include <stdio.h>

int main()
{

    float Km, M;

    printf("Digite a distancia em Km: ");
    scanf("%f", &Km);

    M = Km / 1.61;

    printf("Distancia em milhas: %.2f", M);

    return 0;
}