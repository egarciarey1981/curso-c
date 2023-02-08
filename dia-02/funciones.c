#include <stdio.h>

int doble(int a)
{
    return a * 2;
}

int suma(int x, int y)
{
    return x + y;
}

void titulo()
{
    printf("ARITMETICA\n");
}

int main()
{
    int unNumero = 3;
    int otroNumero = 4;

    int elDoble = doble(unNumero);
    int laSuma= suma(unNumero, otroNumero);

    titulo();
    printf("El doble de %d es %d\n", unNumero, elDoble);
    printf("La suma de %d y %d es %d\n", unNumero, otroNumero, laSuma);

    return 0;
}

