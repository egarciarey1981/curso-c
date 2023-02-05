#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero;

    srand(time(NULL));
    numero = rand() % 10; // numeros del 0 al 9

    printf("Número aleatorio: %d\n", numero);

    return 0;
}