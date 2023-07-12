#include <stdio.h>

float celsius, fahrenheit;

int main()
{

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    /** A divisão de dois inteiros resulta em um inteiro, mesmo que o resultado seja uma fração.
    Correção: usar um número de ponto flutuante em pelo menos um dos operandos,
    o que forçará a divisão a ser realizada como uma operação de ponto flutuante.**/

    fahrenheit = celsius * (9.0 / 5.0) + 32;

    printf("Temperatura em Fahrenheit: %.2f", fahrenheit);

    return 0;
}