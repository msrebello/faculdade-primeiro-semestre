#include <stdio.h>

main()
{

    int x, y, z, maior, med, menor;

    printf("Digite tres numeros, x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y)
    {

        maior = x;
        med = y;
        menor = z;
    }

    else if (x > z && z > y)
    {

        maior = x;
        med = z;
        menor = y;
    }

    else if (y > x && x > z)
    {

        maior = y;
        med = x;
        menor = z;
    }

    else if (y > z && z > x)
    {

        maior = y;
        med = z;
        menor = x;
    }

    else if (z > x && x > y)
    {

        maior = z;
        med = x;
        menor = y;
    }

    else
    {

        maior = z;
        med = y;
        menor = x;
    }
    printf("Ordem crescente: %d,  %d,  %d", menor, med, maior);
}