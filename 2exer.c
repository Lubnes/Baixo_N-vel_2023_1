#include <stdio.h>

void minutos()
{

    int segundos, minutos, horas, tempo;
    printf("Qual o tempo em segundos?");
    scanf("%d", &segundos);

    minutos = tempo / 60;
    segundos = tempo % 60;
    horas = (minutos / 60) / 60;

    printf("Hora: %d Minuto: %d Segundos: %d", horas, minutos, segundos);
}
int main()
{
    minutos();
}