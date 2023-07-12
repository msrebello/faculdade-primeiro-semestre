#include <stdio.h>

int novoHorario, duracao, horas, minutos, segundos;

int main()
{

    printf("Digite o horario: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    printf("Digite a duracao (em segundos): ");
    scanf("%d", &duracao);

    minutos = minutos * 60;
    horas = horas * 3600;

    novoHorario = minutos + horas + segundos + duracao;

    horas = novoHorario / 3600;
    minutos = novoHorario % 3600 / 60;
    segundos = novoHorario % 3600 % 60;

    printf("Novo horario: %d:%d:%d", horas, minutos, segundos);

    return 0;
}