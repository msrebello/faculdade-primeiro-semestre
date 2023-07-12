#include <stdio.h>

float invest1, invest2, invest3, premio, parte1, parte2, parte3, proporcao;

int main()
{

    printf("Digite o valor do premio: ");
    scanf("%f", &premio);
    printf("Digite o investimento do primeiro apostador: ");
    scanf("%f", &invest1);
    printf("Digite o investimento do segundo apostador: ");
    scanf("%f", &invest2);
    printf("Digite o investimento do terceiro apostador: ");
    scanf("%f", &invest3);

    proporcao = premio / (invest1 + invest2 + invest3); // Constante da proporcionalidade

    parte1 = invest1 * proporcao;
    parte2 = invest2 * proporcao;
    parte3 = invest3 * proporcao;

    printf("O primeiro apostador ganhara %.2f, o segundo %.2f, e o terceiro %.2f.", parte1, parte2, parte3);

    return 0;
}
