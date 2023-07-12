#include <stdio.h>

int main()
{

    int codigo_1, numero_1, codigo_2, numero_2;
    double valor_1, valor_2, preco_final;

    scanf("%d %d %lf", &codigo_1, &numero_1, &valor_1);
    scanf("%d %d %lf", &codigo_2, &numero_2, &valor_2);

    preco_final = numero_1 * valor_1 + numero_2 * valor_2;

    printf("VALOR A PAGAR: R$ %.2lf\n", preco_final);
    return 0;
}