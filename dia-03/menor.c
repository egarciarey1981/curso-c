#include <stdio.h>
#include <stdlib.h>

int menor(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a = 5;
    int b = 6;

    int c = menor(a,b);

    printf("%d\n", c);

    return 0;
}
