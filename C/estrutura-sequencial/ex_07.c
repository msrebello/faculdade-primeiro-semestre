#include <stdio.h>

int main()
{

    float c, f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = 5.0 * (f - 32) / 9.0;

    printf("Conversao para Celsius %.2f", c);
    
    return 0;
}