#include <stdio.h>

int numero1, numero2;

int main()
{

    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2)
        printf("Maior numero: %d", numero1);
    else
        printf("%d", numero2);
        
    return 0;
}
