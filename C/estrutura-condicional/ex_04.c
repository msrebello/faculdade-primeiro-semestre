#include <stdio.h>

int numero, divisao;

int main()
{

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("Numero par");
    else
        printf("Numero impar");

    return 0;
}