#include <stdio.h>

int mcm(int x, int y)
{
    int i;

    if (x > y)
    {
        i = y;
    }
    else
    {
        i = x;
    }

    while (!(i % x == 0 && i % y == 0))
    {
        i++;
    }

    return i;
}

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", mcm(a, b));

    return 0;
}