#include <stdio.h>

int main()
{
    double valor;
    int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, moedas_1_real, moedas_50_cent, moedas_25_cent, moedas_10_cent, moedas_5_cent, moedas_1_cent;
    scanf("%lf", &valor);

    notas_100 = valor / 100;
    valor -= notas_100 * 100;

    notas_50 = valor / 50;
    valor -= notas_50 * 50;

    notas_20 = valor / 20;
    valor -= notas_20 * 20;

    notas_10 = valor / 10;
    valor -= notas_10 * 10;

    notas_5 = valor / 5;
    valor -= notas_5 * 5;

    notas_2 = valor / 2;
    valor -= notas_2 * 2;

    moedas_1_real = valor / 1;
    valor -= moedas_1_real * 1;

    moedas_50_cent = valor / 0.50;
    valor -= moedas_50_cent * 0.50;

    moedas_25_cent = valor / 0.25;
    valor -= moedas_25_cent * 0.25;

    moedas_10_cent = valor / 0.10;
    valor -= moedas_10_cent * 0.10;

    moedas_5_cent = valor / 0.05;
    valor -= moedas_5_cent * 0.05;

    moedas_1_cent = valor / 0.01;
    valor -= moedas_1_cent * 0.01;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas_100);
    printf("%d nota(s) de R$ 50.00\n", notas_50);
    printf("%d nota(s) de R$ 20.00\n", notas_20);
    printf("%d nota(s) de R$ 10.00\n", notas_10);
    printf("%d nota(s) de R$ 5.00\n", notas_5);
    printf("%d nota(s) de R$ 2.00\n", notas_2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas_1_real);
    printf("%d moeda(s) de R$ 0.50\n", moedas_50_cent);
    printf("%d moeda(s) de R$ 0.25\n", moedas_25_cent);
    printf("%d moeda(s) de R$ 0.10\n", moedas_10_cent);
    printf("%d moeda(s) de R$ 0.05\n", moedas_5_cent);
    printf("%d moeda(s) de R$ 0.01\n", moedas_1_cent);

    return 0;
}
