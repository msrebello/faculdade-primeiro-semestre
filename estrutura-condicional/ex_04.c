#include <stdio.h>

int numero, divisao;

main()
{

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("Numero par");
    else
        printf("Numero impar");
}