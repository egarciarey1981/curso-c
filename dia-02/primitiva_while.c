#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero = 0;
    int aleatorio = 0;

    srand(time(NULL));

    while (numero < 7)
    {
        // entre 0 y 48
        aleatorio = rand() % 49;

        // correccion para que sea entre 1 y 49
        aleatorio = aleatorio + 1;

        printf("%d ", aleatorio);

        numero = numero + 1;
    }

    printf("\n");

    return 0;
}