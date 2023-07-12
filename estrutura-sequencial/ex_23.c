#include <stdio.h>

int main()
{

    float metros, jardas;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    jardas = metros / 0.91;

    printf("Em jardas: %.2f", jardas);

    return 0;
}