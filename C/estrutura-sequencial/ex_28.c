#include <stdio.h>
#include <math.h>

int main()
{

    float x, y, z, soma;

    printf("Digite tres valores: ");
    scanf("%f %f %f", &x, &y, &z);

    soma = pow(x, 2) + pow(y, 2) + pow(y, 2);

    printf("Soma dos quadrados dos numeros digitados: %.2f", soma);

    return 0;
}