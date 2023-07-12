#include <stdio.h>

int main()
{

    int funcionario, hora_trabalho;
    double salario, valor_hora;

    scanf("%d", &funcionario);
    scanf("%d", &hora_trabalho);
    scanf("%lf", &valor_hora);

    salario = hora_trabalho * valor_hora;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", funcionario, salario);
    return 0;
}