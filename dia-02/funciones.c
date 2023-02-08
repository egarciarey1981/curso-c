#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void titulo()
{
    printf("ARITMETICA\n");
}

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
    int unNumero = 3;
    int otroNumero = 4;

    titulo();
    printf("El doble de %d es %d\n", unNumero, doble(unNumero));
    printf("La suma de %d y %d es %d\n", unNumero, otroNumero, suma(unNumero, otroNumero));

    return 0;
}
