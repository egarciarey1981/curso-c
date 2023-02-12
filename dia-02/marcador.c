#include <stdio.h>

int main()
{
    char equipo = 'l';
    int puntos;
    int local;
    int visitante;

    while (1)
    {
        printf("local %d - %d visitantes\n\n", local, visitante);

        printf("equipo: ");
        scanf("%c", &equipo);
        getchar();

        printf("puntos: ");
        scanf("%d", &puntos);
        getchar();

        if (equipo == 'l')
            local = local + puntos;
        else if (equipo == 'v')
            visitante = visitante + puntos;
    }

    return 0;
}