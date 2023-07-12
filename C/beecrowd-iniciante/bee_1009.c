#include <stdio.h>

int main()
{

    char nome_vendedor[10];
    double salario_fixo, total_venda, comissao, salario_final;

    scanf("%s %lf %lf", &nome_vendedor, &salario_fixo, &total_venda);

    comissao = total_venda * 0.15;

    salario_final = comissao + salario_fixo;

    printf("TOTAL = R$ %.2lf\n", salario_final);
    return 0;
}