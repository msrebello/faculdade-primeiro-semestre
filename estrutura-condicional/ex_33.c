#include <stdio.h>
#include <math.h>

main()
{

    int h1, m1, h2, m2, duracao_minuto, valor_hora, horas_totais;

    printf("Chegada HH MM: ");
    scanf("%d %d", &h1, &m1);

    printf("Chegada HH MM: ");
    scanf("%d %d", &h2, &m2);

    duracao_minuto = (h2 * 60 + m2) - (h1 * 60 + m1);

    /** Considera partida no dia seguinte à chegada. Nesse caso, a subtração direta das horas e minutos resultaria em um número negativo de minutos totais de estacionamento.
    Para contornar esse problema, o código adiciona 24 horas (ou 1440 minutos) ao tempo total de estacionamento, simulando uma partida no dia seguinte. Dessa forma, o tempo total de estacionamento
    sempre será um número positivo. **/
    if (duracao_minuto < 0)
    {
        duracao_minuto += 24 * 60;
    }

    horas_totais = ceil(duracao_minuto / 60.0); // ceil() da biblioteca math.h, que arredonda um número para cima.

    if (horas_totais <= 2)
        valor_hora = horas_totais;

    else if (horas_totais <= 4)
        valor_hora = 2 + (horas_totais - 2) * 1.4; // Valor das duas horas + horas restantes * valor de cada hora restante

    else
        valor_hora = 4.80 + (horas_totais - 4) * 2.0; // Valor das quatro horas (2 + 2,80) + horas restantes * valor de cada hora restante

    printf("Preco a pagar: R$ %.2f\n", valor_hora);
}