#include <stdio.h>
#include <math.h>

float numero, expressao;

int main()
{

    printf("Digite um numero: ");
    scanf("%f", &numero);

    expressao = pow(numero, 2);

    printf("Quadrado do numero: %.2f", expressao);

    return 0;
}