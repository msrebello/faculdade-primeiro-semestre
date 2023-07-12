#include <stdio.h>
#include <math.h>

float numero, resultado;

int main()
{

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0)
        resultado = sqrtf(numero);
    else
        resultado = pow(numero, 2);

    printf("Resultado: %.2f", resultado);

    return 0;
}