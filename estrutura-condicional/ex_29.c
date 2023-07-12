#include <stdio.h>

main()
{

    double preco_antigo, preco_novo, percentual;

    printf("Digite o preco antigo: \n");
    scanf("%lf", &preco_antigo);

    if (preco_antigo < 50.0)
        percentual = 1.05;

    else if (preco_antigo <= 100.0)
        percentual = 1.10;

    else
        percentual = 1.15;

    preco_novo = preco_antigo * percentual;

    printf("Novo preco: R$ %.2lf", preco_novo);

    if (preco_novo < 80.0)
        printf(" [Barato]\n");

    else if (preco_novo <= 120.0)
        printf(" [Normal]\n");

    else if (preco_novo <= 200.0)
        printf(" [Caro]\n");

    else
        printf(" [Muito caro]\n");
}