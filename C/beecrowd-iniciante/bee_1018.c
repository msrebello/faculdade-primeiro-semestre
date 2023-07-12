#include <stdio.h>

int main()
{

    int valor, cent, cinq, vint, dez, un_5, un_2, un_1;

    scanf("%d", &valor);

    cent = valor / 100;
    cinq = valor % 100 / 50;
    vint = valor % 100 % 50 / 20;
    dez = valor % 100 % 50 % 20 / 10;
    un_5 = valor % 100 % 50 % 20 % 10 / 5;
    un_2 = valor % 100 % 50 % 20 % 10 % 5 / 2;
    un_1 = valor % 100 % 50 % 20 % 10 % 5 % 2 / 1;

    printf("%d nota(s) de R$ 100,00\n", cent);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vint);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", un_5);
    printf("%d nota(s) de R$ 2,00\n", un_2);
    printf("%d nota(s) de R$ 1,00\n", un_1);
    return 0;
}