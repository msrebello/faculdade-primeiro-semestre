#include <stdio.h>

int main()
{

    float kmh, ms;

    printf("Digite a velocidade em Km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s %.2f", ms);

    return 0;
}