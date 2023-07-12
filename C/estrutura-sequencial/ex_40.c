#include <stdio.h>

float salarioLiquido, dias;

int main()
{

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f", &dias);

    salarioLiquido = dias * 30 * 0.92;

    printf("Salario liquido do encanador: %.2f", salarioLiquido);

    return 0;
}