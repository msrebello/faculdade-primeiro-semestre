#include <stdio.h>

int main()
{

    int x;

    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Domingo");
        break;

    case 2:
        printf("Segunda Feira");
        break;

    case 3:
        printf("Terca Feira");
        break;

    case 4:
        printf("Quarta Feira");
        break;

    case 5:
        printf("Quinta Feira");
        break;

    case 6:
        printf("Sexta Feira");
        break;

    case 7:
        printf("Sabado");
        break;

    default:
        printf("Numero invalido");
        break;
    }

    return 0;
}