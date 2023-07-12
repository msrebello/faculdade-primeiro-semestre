#include <stdio.h>
#include <math.h>

int main()
{

    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    triangulo = (A * C) / 2;    // Base*altura, dividido por 2
    circulo = pi * pow(C, 2);   // Pi*raio ao quadrado
    trapezio = (A + B) * C / 2; // Soma das bases*altura, dividido por 2
    quadrado = B * B;
    retangulo = A * B;

    printf("TRIANGULO: %.3lf\n CIRCULO: %.3lf\n TRAPEZIO: %.3lf\n QUADRADO: %.3lf\n RETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    return 0;
}