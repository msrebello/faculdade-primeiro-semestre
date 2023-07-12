#include <stdio.h>
#include <math.h>
int x, y;
float distancia;

int main()
{

    printf("Digite as cordenadas, x e y, respectivamente: ");
    scanf("%d %d", &x, &y);

    distancia = sqrt(pow(x, 2.0) + pow(y, 2.0));

    printf("Distancia da origem: %.2f", distancia);

    return 0;
}