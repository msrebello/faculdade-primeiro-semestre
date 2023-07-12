#include <stdio.h>

main()
{

    double peso, altura, imc;

    printf("Digite o peso e altura: ");
    scanf("%lf/%lf", &peso, &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5)
        printf("Abaixo do peso");
    else if (imc <= 24.9)
        printf("Saudavel");
    else if (imc <= 29.9)
        printf("Peso em excesso");
    else if (imc <= 34.9)
        printf("Obesidade Grau I");
    else if (imc <= 39.9)
        printf("Obesidade Grau II (Severa)");
    else
        printf("Obesidade Grau III (Morbida)");

    return 0;
}