#include <stdio.h>
#include <math.h>

int main()
{

    float raio, pi = 3.141592, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = pi * pow(raio, 2);

    printf("Area do circulo em metros: %.2f", area);

    return 0;
}