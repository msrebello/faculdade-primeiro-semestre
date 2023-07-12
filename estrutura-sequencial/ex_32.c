#include <stdio.h>

int main()
{

    int a, inteiro, s, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);

    a = inteiro - 1;
    s = inteiro + 1;
    soma = 3 * s + 2 * a;

    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro do numero %d é: %d", inteiro, soma);

    return 0;
}