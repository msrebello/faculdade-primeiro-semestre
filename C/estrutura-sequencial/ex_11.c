#include <stdio.h>

int main()
{

    float kmh, ms;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);

    kmh = ms * 3.6;

    printf("Velocidade em km/h %.2f", kmh);

    return 0;
}