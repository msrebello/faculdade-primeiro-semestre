#include <stdio.h>

int numero1, numero2, numero3, soma;

int main()
{

    printf("Digite os numeros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    soma = numero1 + numero2 + numero3;

    printf("Soma dos numeros: %d", soma);

    return 0;
}