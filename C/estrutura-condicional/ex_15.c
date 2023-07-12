#include <stdio.h>

int main()
{

    char simbolo;
    int x, y, operacao;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Digite a operacao: ");
    scanf(" %c", &simbolo);

    switch (simbolo)
    {
    case '+':
        operacao = x + y;
        break;

    case '-':
        operacao = x - y;
        break;

    case '/':

        if (y != 0)

            operacao = x / y;

        else
            printf("Divisor = 0!");

        break;

    case '*':
        operacao = x * y;
        break;
    };
    printf("Resultado = %d", operacao);

    return 0;
}