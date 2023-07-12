#include <stdio.h>

int main()
{

    double nota, falta;

    printf("Digite o nota: ");
    scanf("%lf", &nota);
    printf("Digite a quantidade de faltas: ");
    scanf("%lf", &falta);

    if (falta <= 20)
    {

        if (nota <= 3.9)
            printf("CONCEITO A");
        else if (nota <= 4.9)
            printf("CONCEITO B");
        else if (nota <= 7.4)
            printf("CONCEITO C");
        else if (nota <= 8.9)
            printf("CONCEITO D");
        else if (nota <= 10.0)
            printf("CONCEITO E");
    }

    else
    {

        if (nota <= 3.9)
            printf("CONCEITO B");
        else if (nota <= 4.9)
            printf("CONCEITO C");
        else if (nota <= 7.4)
            printf("CONCEITO D");
        else if (nota <= 8.9)
            printf("CONCEITO E");
        else if (nota <= 10.0)
            printf("CONCEITO F");
    }
    return 0;
}