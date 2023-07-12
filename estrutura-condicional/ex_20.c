#include <stdio.h>

int main()
{
    float valor, imposto;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado destino do produto (MG, SP, RJ ou MS): ");
    scanf("%s", estado);

    if (estado[0] == 'M' && estado[1] == 'G')
    {
        imposto = 1.07 * valor;
    }
    else if (estado[0] == 'S' && estado[1] == 'P')
    {
        imposto = 1.12 * valor;
    }
    else if (estado[0] == 'R' && estado[1] == 'J')
    {
        imposto = 1.15 * valor;
    }
    else if (estado[0] == 'M' && estado[1] == 'S')
    {
        imposto = 1.08 * valor;
    }
    else
    {
        printf("Erro: estado inválido.\n");
        return 1;
    }

    printf("Preco final do produto: R$ %.2f\n", imposto);

    return 0;
}
