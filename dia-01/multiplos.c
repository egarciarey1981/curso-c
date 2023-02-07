#include <stdio.h>

int main()
{
    int numero = 0;

    while (numero < 10)
    {
        if ((numero % 2) == 0)
            printf("%d es múltiplo de 2\n", numero);
        else if ((numero % 3) == 0)
            printf("%d es múltiplo de 3\n", numero);
        else if ((numero % 5) == 0)
            printf("%d es múltiplo de 5\n", numero);
        else
            printf("%d no es múltiplo de 2, 3 o 5\n", numero);

        numero = numero + 1;
    }

    return 0;
}