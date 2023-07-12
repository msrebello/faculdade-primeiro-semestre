#include <stdio.h>

main()
{

    int a, b, c;

    printf("Digite os valores dos lados: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
    {

        if (a == b && b == c)
            printf("Equilatero");

        else if (a == b || b == c)
            printf("Isosceles");

        else
            printf("Escaleno");
    }
    else
        printf("Não é um triangulo");
}