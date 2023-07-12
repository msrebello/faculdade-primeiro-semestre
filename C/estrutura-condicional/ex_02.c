#include <stdio.h>
#include <math.h>

int numero, positivo;

int main()
{

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("%d teste\n", numero);
    if (numero >= 0)
    {

        positivo = sqrt(numero);
        printf("%d", positivo);
    }
    else
        printf("Numero invalido");
        
    return 0;
}
