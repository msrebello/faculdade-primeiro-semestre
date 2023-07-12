#include <stdio.h>

int main()
{

    double distancia, litros, consumo;

    printf("distancia: ");
    scanf("%lf", &distancia);

    printf("quantidade de litros: ");
    scanf("%lf", &litros);

    consumo = distancia / litros;

    if (consumo < 8)
        printf("venda o carro");

    else if (consumo <= 12)
        printf("economico");

    else
        printf("super economico");

    return 0;
}