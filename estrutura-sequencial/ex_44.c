#include <stdio.h>

float alturadDegrau, alturaDesejada;
int degraus;

int main()
{

    printf("Digite a altura do degrau (em metros): ");
    scanf("%f", &alturadDegrau);

    printf("Digite a altura desejada (em metros): ");
    scanf("%f", &alturaDesejada);

    degraus = alturaDesejada / alturadDegrau;

    printf("Quantidade de degraus necessarios para atingir a altura desejada: %d", degraus);

    return 0;
}
