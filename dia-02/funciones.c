#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int doble(int x)
{
    return x * 2;
}

int suma(int x, int y)
{
    return x + y;
}

int main()
{
    int unNumero = 2;
    int otroNumero = 3;

    printf("El doble de %d es %d\n", unNumero, doble(unNumero));
    printf("La suma de %d y %d es %d\n", unNumero, otroNumero, suma(unNumero, otroNumero));

    return 0;
}
