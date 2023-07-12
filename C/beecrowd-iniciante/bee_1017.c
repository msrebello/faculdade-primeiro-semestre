#include <stdio.h>

int main()
{

    int vm, t; // velocidade e tempo
    double distancia, litros;
    scanf("%d %d", &vm, &t);

    distancia = vm * t;
    litros = distancia / 12;

    printf("%.3lf\n", litros);
    return 0;
}