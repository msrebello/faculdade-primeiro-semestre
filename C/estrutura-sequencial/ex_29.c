#include <stdio.h>

int main()
{

    float nota1, nota2, nota3, nota4, media;

    printf("Digite as notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Media das notas: %.2f", media);

    return 0;
}