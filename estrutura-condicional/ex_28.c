#include <stdio.h>

main()
{
    int codigo, quantidade;
    double valor_pago;

    printf("Digite o cod do lanche: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 100:
        valor_pago = quantidade * 1.20;
        break;

    case 101:
        valor_pago = quantidade * 1.30;
        break;

    case 102:
        valor_pago = quantidade * 1.50;
        break;

    case 103:
        valor_pago = quantidade * 1.20;
        break;

    case 104:
        valor_pago = quantidade * 1.70;
        break;

    case 105:
        valor_pago = quantidade * 2.20;
        break;

    case 106:
        valor_pago = quantidade * 1.00;
        break;

    default:
        printf("Codigo invalido!");
        break;
    }

    printf("Valor a ser pago: %.2lf", valor_pago);
    return 0;
}
