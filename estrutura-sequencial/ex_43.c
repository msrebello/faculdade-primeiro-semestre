#include <stdio.h>

float valorTotal, aVista, parcelado, comissao1, comissao2;

int main()
{

    printf("Digite o valor do produto: ");
    scanf("%f", &valorTotal);

    aVista = valorTotal * 0.90;
    parcelado = valorTotal / 3;
    comissao1 = aVista * 1.05;
    comissao2 = valorTotal * 1.05;

    printf("Valor do produto a vista: %.2f\n", aVista);
    printf("Valor do produto parcelado em 3x: %.2f\n", parcelado);
    printf("Comissao do vendedor do produto vendido a vista a vista: %.2f\n", comissao1);
    printf("Comissao do vendedor do produto vendido parcelado: %.2f\n", comissao2);

    return 0;
}