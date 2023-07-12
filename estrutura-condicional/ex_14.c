#include <stdio.h>

main()
{

    double bmenor, bmaior, h, area;

    printf("Digite a base menor: ");
    scanf("%lf", &bmenor);
    printf("Digite a base maior: ");
    scanf("%lf", &bmaior);
    printf("Digite a altura: ");
    scanf("%lf", &h);

    if ((bmenor <= 0) || (bmaior <= 0))
        printf("Valores invalidos");

    else
    {
        area = ((bmenor + bmaior) * h) / 2;

        printf("Area = %.2lf", area);
    }
}