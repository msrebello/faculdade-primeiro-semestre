#include <stdio.h>

int valor, horas, minutos, segundos;

int main()
{

    printf("Tempo em segundos: ");
    scanf("%d", &valor);

    horas = valor / 3600;
    minutos = valor % 3600 / 60;
    segundos = valor % 3600 % 60;

    printf("Horario: %d:%d:%d", horas, minutos, segundos);

    return 0;
}