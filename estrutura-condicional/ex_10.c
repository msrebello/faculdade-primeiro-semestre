#include <stdio.h>

float altura, nome;

main()
{

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo (1 para Masculino, 2 para Feminino): \n");
    scanf("%f", &nome);
    printf("");

    if (nome == 1)
    {
        printf("Peso ideal: %.2f", altura * 72.7 - 58.0);
    }
    else
        printf("Peso ideal: %.2f", altura * 62.1 - 44.7);
}
