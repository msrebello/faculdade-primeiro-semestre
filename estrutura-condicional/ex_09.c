#include <stdio.h>

float salario, prestacao;

main()
{

    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o valor prestacao: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.2)
        printf("Emprestimo nao concedido");

    else
        printf("Emprestimo concedido");
}
