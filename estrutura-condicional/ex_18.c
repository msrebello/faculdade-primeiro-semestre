#include <stdio.h>

int main()
{
    int idade, contribuicao;

    printf("Digite a idade e o tempo de contribuicao: ");
    scanf("%d %d", &idade, &contribuicao);

    if (idade >= 65 || contribuicao >= 30 || idade >= 60 && contribuicao >= 25)

        printf("Pode se aposentar.");

    else
        printf("Nao se aposenta.");

    return 0;
}
