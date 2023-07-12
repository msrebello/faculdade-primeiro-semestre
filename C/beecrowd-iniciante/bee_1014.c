#include <stdio.h>

int main()
{
    int distancia;
    double total_combustivel, consumo;

    scanf("%d %lf", &distancia, &total_combustivel);

    consumo = distancia / total_combustivel;

    printf("%.3lf km/l\n", consumo);

    return 0;
}