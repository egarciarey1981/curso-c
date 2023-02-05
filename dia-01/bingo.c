#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    // variables para el número aleatorio y el del jugador
    int aleatorio;
    int numero;

    // calcular número aleatorio
    srand(time(NULL));
    aleatorio = rand() % 10;

    // pedir primer numero
    printf("Averigua un número entre 0 y 9: ");
    scanf("%d", &numero);

    // si no lo ha averiguado, dar una pista y pedir otro número
    while (aleatorio != numero)
    {
        if (aleatorio > numero)
            printf("Mayor\n");
        else if (aleatorio < numero)
            printf("Menor\n");

        scanf("%d", &numero);
    }

    // si estas aqui, has averiguado el número
    printf("¡Bingo!\n");

    return 0;
}