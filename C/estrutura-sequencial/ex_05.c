#include <stdio.h>

float numero, quintaParte;

int main()
{

    printf("Digite um numero: ");
    scanf("%f", &numero);

    quintaParte = numero / 5;

    printf("Numero digitado: %.2f", quintaParte);

    return 0;
}