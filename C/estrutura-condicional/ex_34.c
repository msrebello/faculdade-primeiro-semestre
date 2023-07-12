#include <stdio.h>

int main()
{
    int dia, mes, ano, bissexto, valido;

    // leitura da data de nascimento
    printf("Digite sua data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // verifica se o ano é bissexto
    bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

    // verifica a validade do mês
    if (mes < 1 || mes > 12)
    {
        valido = 0;
    }
    else
    {
        // verifica a validade do dia, considerando o mês e se o ano é bissexto
        switch (mes)
        {
        case 2:
            if (dia >= 1 && dia <= (bissexto ? 29 : 28))
            {
                valido = 1;
            }
            else
            {
                valido = 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia >= 1 && dia <= 30)
            {
                valido = 1;
            }
            else
            {
                valido = 0;
            }
            break;
        default:
            if (dia >= 1 && dia <= 31)
            {
                valido = 1;
            }
            else
            {
                valido = 0;
            }
            break;
        }
    }

    // verifica a validade do ano
    if (ano > 2008)
    {
        valido = 0;
    }

    // imprime a mensagem de validade da data
    if (valido)
    { /** Em C, a expressão if (x) é equivalente a if (x != 0). Ou seja, se a variável x for diferente de zero, a expressão if (x) será verdadeira. **/
        printf("Data válida\n");
    }
    else
    {
        printf("Data inválida\n");
    }

    return 0;
}