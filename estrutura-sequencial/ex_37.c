#include <stdio.h>

int main()
{

    float produto, produtoDesconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    produtoDesconto = produto * 0.88;

    printf("Valor do produto com desconto: %.2f", produtoDesconto);

    return 0;
}