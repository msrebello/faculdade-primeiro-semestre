#include <stdio.h>
#include <math.h>

main()
{

    int x, y, z, numero;
    double operacao;

    printf("Digite os numeros x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Digite numero de 1 a 4: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        operacao = cbrt(x * y * z);

        break;

    case 2:
        operacao = (x + 2 * y + 3 * z) / 6;

        break;

    case 3:
        operacao = 1 / (1 / x + 1 / y + 1 / z);

        break;

    case 4:
        operacao = (x + y + z) / 3;

        break;
    default:
        printf("Numero invalido.");
        break;
    }
    printf("Resultado: %.2lf", operacao);
}