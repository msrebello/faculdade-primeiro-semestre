#include <stdio.h>

int main()
{

    float salario, aumento;

    printf("Salario do funcionario: ");
    scanf("%f", &salario);

    aumento = salario * 0.25 + salario;

    printf("Salario com aumento: %.2f", aumento);

    return 0;
}
