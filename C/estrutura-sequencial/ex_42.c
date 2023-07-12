#include <stdio.h>

float salario_base, gratificacao, imposto, salario_liquido;

int main()
{

    printf("Digite o valor do salario base do funcionario: ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario liquido do funcionario: %.2f", salario_liquido);

    return 0;
}