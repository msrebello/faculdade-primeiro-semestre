#include <stdio.h>

int numero, u, d, c;

int main()
{

    printf("Digite um numero inteiro positivo (de 100 a 999): ");
    scanf("%d", &numero);

    c = numero / 100; // Mostra a casa da centena, como inteiro por ser int
    d = numero % 100 / 10;
    /** Mostra a casa da dezena. Pega o resto da divisão incial e divide por 10 para chegar a segunda casa,
    em valor inteiro**/
    u = numero % 100 % 10;
    /** Mostra a casa da unidade. Pega o resto da segunda divisão e divide por 10, para achar o resto
    que indica a unidade**/

    printf("%d%d%d", u, d, c);

    return 0;
}