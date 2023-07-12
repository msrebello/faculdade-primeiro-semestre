#include <stdio.h>

float numero;

int main()
{

    printf("Digite um numero: ");
    scanf("%f", &numero);

    printf("Numero digitado: %.2f", numero);

    return 0;
}