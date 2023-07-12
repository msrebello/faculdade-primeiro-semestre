#include <stdio.h>

int main()
{

    int valor_a, valor_b, valor_c, valor_d, diferenca;

    scanf("%d %d %d %d", &valor_a, &valor_b, &valor_c, &valor_d);

    diferenca = valor_a * valor_b - valor_c * valor_d;

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}