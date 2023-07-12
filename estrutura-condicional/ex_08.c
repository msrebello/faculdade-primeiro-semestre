#include <stdio.h>

float x, y, media;

main()
{

    printf("Nota 1: ");
    scanf("%f", &x);
    printf("Nota 2: ");
    scanf("%f", &y);

    if (x < 0 || x > 10 || y < 0 || y > 10)
        printf("Valor da nota invalido");

    else
    {
        media = (x + y) / 2;

        printf("Media: %.2f\n", media);
    }
}
