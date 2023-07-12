#include <stdio.h>

float x, y, maior, menor;

int main()
{

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    if (x == y)
        printf("Numero iguais\n");

    else
    {

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
    }

    return 0;
}