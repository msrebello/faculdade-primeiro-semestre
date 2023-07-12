#include <stdio.h>

main()
{

    double preco_carro, custo_fabrica, comissao, imposto;

    printf("Digite o custo de fabrica: ");
    scanf("%lf", &custo_fabrica);

    if (custo_fabrica <= 12000.00)
    {

        comissao = 0.05;
    }

    else if (custo_fabrica <= 25000.00)
    {

        comissao = 0.10;
        imposto = 0.15;
    }

    else
    {

        comissao = 0.15;
        imposto = 0.20;
    }

    preco_carro = custo_fabrica + custo_fabrica * comissao + custo_fabrica * imposto;
    printf("Custo ao consumidor: %.2lf", preco_carro);

    return 0;
}