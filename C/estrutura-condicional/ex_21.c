#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, delta, x1, x2;

    printf("Digite o valor de 'a': ");
    scanf("%lf", &a);
    printf("Digite o valor de 'b': ");
    scanf("%lf", &b);
    printf("Digite o valor de 'c': ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * c * a;

    if (a == 0)
        printf("Nao e equacao de segundo grau.");

    else
    {

        if (delta < 0)
        {

            printf("Nao existe raiz");
        }
        else if (delta == 0)
        {

            x1 = (-b + sqrt(delta)) / (2 * a);

            printf("Raiz unica = %.2lf", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);

            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("Raizes: %.2lf, %.2lf", x1, x2);
        }
    }
    
    return 0;
}