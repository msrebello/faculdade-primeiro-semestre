#include <stdio.h>

int main()
{

    float metros, acres;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    acres = metros * 0.000247;

    printf("Area em acres: %f", acres);

    return 0;
}