#include <stdio.h>

float largura, comprimento, telaPreco, custo;

int main()
{

    printf("Digite o comprimento e a largura do terreno (em metros): ");
    scanf("%f %f", &comprimento, &largura);
    printf("Digite o preco da tela/metro: ");
    scanf("%f", &telaPreco);

    custo = telaPreco * (2 * comprimento + 2 * largura);

    printf("Custo do cermento do terreno: %.2f", custo);

    return 0;
}