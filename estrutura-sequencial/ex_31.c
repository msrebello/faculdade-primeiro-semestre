#include <stdio.h>

int main()
{

    int a, inteiro, s;

    printf("Digite o numero: ");
    scanf("%d", &inteiro);

    a = inteiro - 1;
    s = inteiro + 1;

    printf("O numero %d tem como antecessor %d e sucessor %d.", inteiro, a, s);
    
    return 0;
}