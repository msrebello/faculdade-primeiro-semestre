#include <stdio.h>

main()
{

    int valor, resultado, a, b, c;

    scanf("%d", &valor);

    if (valor < 0)
        printf("Numero invalido");

    else
    {
        a = valor / 100;
        b = valor % 100 / 10;
        c = valor % 100 % 10;

        printf("Soma = %d", a + b + c);
    }
}