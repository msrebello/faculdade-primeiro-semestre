#include <stdio.h>

char letra;

int main()
{

    printf("Digite uma letra maiscula: ");
    scanf("%c", &letra);

    if ((letra >= 'A') && (letra <= 'Z'))
        ;
    letra += 32; // soma 32 para converter para a letra minúscula correspondente na tabela ASCII

    /** A expressão letra += 32; é uma forma abreviada de escrever letra = letra + 32;.
    é chamada de operação de atribuição composta, que é uma maneira mais concisa de escrever
    expressões que envolvem a atribuição de valores a uma variável e uma operação aritmética**/

    printf("Letra minuscula correspondente: %c", letra);

    return 0;
}