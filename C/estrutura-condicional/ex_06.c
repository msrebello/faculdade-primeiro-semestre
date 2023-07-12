#include <stdio.h>

int x, y, maior, menor;

int main()
{

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        maior = x;
        menor = y;
    }
    else
    {

        maior = y;
        menor = x;
    }
    printf("Maior numero: %d\n", maior);
    printf("Diferenca: %d\n", maior - menor);

    return 0;
}