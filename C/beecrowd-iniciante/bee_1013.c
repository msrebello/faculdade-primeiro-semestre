#include <stdio.h>

int main()
{

    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);

    maior = (a + b + abs(a - b)) / 2; // abs retorna o valor absoluto, isto é, o modulo

    if (c > maior)
        printf("%d eh o maior\n", c);
    else
        printf("%d eh o maior\n", maior);

    return 0;
}