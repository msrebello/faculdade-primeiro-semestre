#include <stdio.h>

int main()
{

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("O número é divisível por 3 e 5 simultaneamente.\n");
    }
    else if (num % 3 == 0)
    {
        printf("O número é divisível por 3.\n");
    }
    else if (num % 5 == 0)
    {
        printf("O número é divisível por 5.\n");
    }
    else
    {
        printf("O número não é divisível nem por 3 nem por 5.\n");
    }
    return 0;
}