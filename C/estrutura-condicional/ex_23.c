#include <stdio.h>

int main()
{

    int idade;

    printf("idade: ");
    scanf("%d", &idade);

    if (idade < 5)
        printf("idade invalida");

    else
    {

        if (idade <= 7)
            printf("infantil A");

        else if (idade <= 10)
            printf("infantil B");

        else if (idade <= 13)
            printf("juvenil A");

        else if (idade <= 17)
            printf("juvenil B");

        else
            printf("SENIOR");
    }

    return 0;
}