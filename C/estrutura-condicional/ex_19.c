#include <stdio.h>

int main()
{

    int ano;

    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0))
        printf("Bissexto");

    else
        printf("Nao bissexto");

    return 0;
}