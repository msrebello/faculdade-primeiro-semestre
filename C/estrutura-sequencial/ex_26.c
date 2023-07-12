#include <stdio.h>

intmain()
{

    float metros, hectares;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    hectares = metros * 0.0001;

    printf("Area em hectares: %.2f", hectares);

    return 0;
}