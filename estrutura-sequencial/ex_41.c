#include <stdio.h>

float horaTrabalho, salario;
int horasTrabalhadas;

int main()
{

    printf("Digite o valor da hora de trabalho (em reais) do funcionario: ");
    scanf("%f", &horaTrabalho);
    printf("Digite o total de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    salario = horasTrabalhadas * horaTrabalho * 1.1;

    printf("Salario a ser pago: %.2f", salario);

    return 0;
}