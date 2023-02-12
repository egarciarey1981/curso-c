#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int aleatorio = 0;

    srand(time(NULL));

    for(int numero = 0; numero < 7; numero = numero + 1)
    {
        // entre 0 y 48
        aleatorio = rand() % 49;

        // correccion para que sea entre 1 y 49
        aleatorio = aleatorio + 1;

        printf("%d ", aleatorio);
    }

    printf("\n");

    return 0;
}