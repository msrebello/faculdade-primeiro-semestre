#include <stdio.h>
#include <math.h>
#include <locale.h>

double A, B, C, media; // Notas dos alunos, e media

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Digite as três notas: ");
    scanf("%4.1f %4.1f %4.1f", &A, &B, &C);

    media = (2 * A + 3 * B + 5 * C) / 10.0;

    printf("MEDIA = %4.1lf", media);
    return 0;
}