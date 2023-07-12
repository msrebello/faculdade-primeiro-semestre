#include <stdio.h>

int main()
{

    double peso, altura;

    printf("Digite o peso: ");
    scanf("%lf", &peso);
    printf("Digite o altura: ");
    scanf("%lf", &altura);

    if (peso < 60)
    {

        if (altura < 1.20)
            printf("Classificacao A");
        else if (altura <= 1.70)
            printf("Classificacao B");
        else
            printf("Classificacao C");
    }

    else if (peso <= 90)
    {

        if (altura < 1.20)
            printf("Classificacao D");
        else if (altura <= 1.70)
            printf("Classificacao E");
        else
            printf("Classificacao F");
    }

    else
    {

        if (altura < 1.20)
            printf("Classificacao G");
        else if (altura <= 1.70)
            printf("Classificacao H");
        else
            printf("Classificacao I");
    }
    return 0;
}