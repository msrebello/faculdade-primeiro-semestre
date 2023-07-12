#include <stdio.h>

int main()
{

    float importancia, ganhador1, ganhador2, ganhador3;

    printf("Digite o valor da importancia: ");
    scanf("%f", &importancia);

    ganhador1 = importancia * 0.46;
    ganhador2 = importancia * 0.32;
    ganhador3 = importancia * 0.22;

    printf("Primeiro ganhador recebe: %.2f\n", ganhador1);
    printf("Segundo ganhador recebe: %.2f\n", ganhador2);
    printf("Terceiro ganhador recebe: %.2f\n", ganhador3);

    return 0;
}
