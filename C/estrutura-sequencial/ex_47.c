#include <stdio.h>

int numero, u, d, c, m;

int main()
{

    printf("Digite um numero inteiro de 4 digitos (de 1000 a 9999): ");
    scanf("%d", &numero);

    m = numero / 1000;
    c = numero % 1000 / 100;
    d = numero % 1000 % 100 / 10;
    u = numero % 1000 % 100 % 10;

    printf("%d\n%d\n%d\n%d", m, c, d, u);

    return 0;
}