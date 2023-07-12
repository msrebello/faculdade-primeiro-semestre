#include <stdio.h>

int main()
{

    float real, dolar;

    printf("Digite o valor em real: ");
    scanf("%f", &real);

    dolar = 5.06 * real;

    printf("Valor em dolar: %.2f", dolar);

    return 0;
}