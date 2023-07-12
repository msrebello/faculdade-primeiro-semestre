#include <stdio.h>
#include <math.h>

int main()
{

    float hipotenusa, a, b;

    printf("Digite o valor dos catetos a e b, respectivamente: ");
    scanf("%f %f", &a, &b);

    hipotenusa = sqrtf((pow(a, 2) + pow(b, 2)));

    printf("Hipotenusa: %.2f", hipotenusa);

    return 0;
}