#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite uma data no formato dia/mes/ano: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // Verifica se o mês está entre 1 e 12
    if (mes < 1 || mes > 12)
    {
        printf("Data invalida\n");
        return 0;
    }

    // Verifica se o dia existe naquele mês
    int dias_no_mes;
    if (mes == 2)
    {
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        {
            dias_no_mes = 29; // Ano bissexto
        }
        else
        {
            dias_no_mes = 28; // Ano não bissexto
        }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias_no_mes = 30;
    }
    else
    {
        dias_no_mes = 31;
    }

    if (dia < 1 || dia > dias_no_mes)
    {
        printf("Data invalida\n");
        return 0;
    }

    // Se chegou aqui, a data é válida
    printf("Data valida\n");

    return 0;
}
